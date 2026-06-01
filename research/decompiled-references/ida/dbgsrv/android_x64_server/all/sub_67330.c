/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67330
// Address: 0x0000000000067330

//----- (0000000000067330) ----------------------------------------------------
__int64 __fastcall sub_67330(__int64 a1)
{
  char *v1; // rdx
  const char *v2; // rsi
  __int64 v3; // r14
  __int64 v4; // rcx
  char *v5; // rax
  __int64 v6; // r14
  __int64 v7; // rcx
  char *v8; // rax
  __int64 v9; // r14
  void *ptr[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v12; // [rsp+10h] [rbp-28h]
  unsigned __int64 v13; // [rsp+20h] [rbp-18h]

  v13 = __readfsqword(0x28u);
  switch ( *(_WORD *)(a1 + 64) )
  {
    case 3:
    case 5:
      sub_61AC0(a1, *(_QWORD *)(a1 + 72));
      break;
    case 4:
      *(_OWORD *)ptr = 0;
      v12 = 0;
      sub_62AF0((__int64)ptr, a1 + 40);
      v1 = (char *)ptr[1];
      if ( ptr[1] )
      {
        v1 = (char *)ptr[1] - 1;
        v2 = (const char *)ptr[0];
      }
      else
      {
        v2 = s1;
      }
      sub_61790(a1, v2, (size_t)v1);
      if ( ptr[0] )
      {
        ptr[1] = nullptr;
        qfree(ptr[0]);
        ptr[0] = nullptr;
        v12 = 0;
      }
      break;
    case 7:
      *(_BYTE *)(a1 + 212) = -46;
      v6 = *(_QWORD *)(a1 + 200);
      v7 = *(_QWORD *)(v6 + 8);
      if ( *(_QWORD *)(v6 + 16) >= (unsigned __int64)(v7 + 1) )
      {
        v8 = *(char **)v6;
      }
      else
      {
        v8 = (char *)qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v6, v7 + 1, 1u);
        *(_QWORD *)v6 = v8;
        v7 = *(_QWORD *)(v6 + 8);
      }
      v8[v7] = -46;
      ++*(_QWORD *)(v6 + 8);
      ++*(_DWORD *)(a1 + 208);
      sub_6BDC0(*(_QWORD **)(a1 + 200), (const void *)(a1 + 88), 0x10u);
      *(_DWORD *)(a1 + 208) += 16;
      break;
    case 8:
      *(_BYTE *)(a1 + 212) = -45;
      v3 = *(_QWORD *)(a1 + 200);
      v4 = *(_QWORD *)(v3 + 8);
      if ( *(_QWORD *)(v3 + 16) >= (unsigned __int64)(v4 + 1) )
      {
        v5 = *(char **)v3;
      }
      else
      {
        v5 = (char *)qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v3, v4 + 1, 1u);
        *(_QWORD *)v3 = v5;
        v4 = *(_QWORD *)(v3 + 8);
      }
      v5[v4] = -45;
      ++*(_QWORD *)(v3 + 8);
      ++*(_DWORD *)(a1 + 208);
      v9 = *(_QWORD *)(a1 + 88);
      sub_616A0(a1, v9);
      sub_616A0(a1, SWORD1(v9));
      sub_616A0(a1, SWORD2(v9));
      sub_616A0(a1, SHIWORD(v9));
      break;
    default:
      if ( !(_BYTE)under_debugger )
        interr(275);
      BUG();
  }
  return 0;
}
// 158B40: using guessed type __int64 under_debugger;
