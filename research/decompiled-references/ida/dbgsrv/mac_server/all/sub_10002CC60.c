/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002CC60
// Address: 0x000000010002CC60

//----- (000000010002CC60) ----------------------------------------------------
__int64 __fastcall sub_10002CC60(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  const char *v5; // rsi
  __int64 v6; // rbx
  void *v7; // rax
  __int64 v8; // rcx
  size_t v9; // rdx
  __int64 result; // rax
  _Unwind_Exception *v11; // rax
  int v12; // edx
  __int128 v13; // [rsp+0h] [rbp-30h] BYREF
  __int64 v14; // [rsp+10h] [rbp-20h]

  switch ( *(_WORD *)(a1 + 64) )
  {
    case 3:
    case 5:
      sub_100026E20(a1, *(_QWORD *)(a1 + 72));
      break;
    case 4:
      v13 = 0;
      v14 = 0;
      sub_100027F20((__int64)&v13, a1 + 40);
      if ( *((_QWORD *)&v13 + 1) )
        v5 = (const char *)v13;
      else
        v5 = _s1;
      v9 = 0;
      if ( *((_QWORD *)&v13 + 1) )
        v9 = *((_QWORD *)&v13 + 1) - 1LL;
      sub_100026AC0(a1, v5, v9);
      if ( (_QWORD)v13 )
      {
        *((_QWORD *)&v13 + 1) = 0;
        qfree((void *)v13);
      }
      break;
    case 7:
      *(_BYTE *)(a1 + 212) = -46;
      v6 = *(_QWORD *)(a1 + 200);
      v7 = *(void **)v6;
      v8 = *(_QWORD *)(v6 + 8);
      if ( *(_QWORD *)(v6 + 16) < (unsigned __int64)(v8 + 1) )
      {
        v7 = qvector_reserve(*(_QWORD *)(a1 + 200), v7, v8 + 1, 1u);
        *(_QWORD *)v6 = v7;
        v8 = *(_QWORD *)(v6 + 8);
      }
      *((_BYTE *)v7 + v8) = -46;
      ++*(_QWORD *)(v6 + 8);
      ++*(_DWORD *)(a1 + 208);
      sub_100032BC0(*(_QWORD **)(a1 + 200), (const void *)(a1 + 88), 0x10u);
      *(_DWORD *)(a1 + 208) += 16;
      break;
    case 8:
      *(_BYTE *)(a1 + 212) = -45;
      v1 = *(_QWORD *)(a1 + 200);
      v2 = *(void **)v1;
      v3 = *(_QWORD *)(v1 + 8);
      if ( *(_QWORD *)(v1 + 16) < (unsigned __int64)(v3 + 1) )
      {
        v2 = qvector_reserve(*(_QWORD *)(a1 + 200), v2, v3 + 1, 1u);
        *(_QWORD *)v1 = v2;
        v3 = *(_QWORD *)(v1 + 8);
      }
      *((_BYTE *)v2 + v3) = -45;
      ++*(_QWORD *)(v1 + 8);
      ++*(_DWORD *)(a1 + 208);
      v4 = *(_QWORD *)(a1 + 88);
      sub_100026A20(a1, v4);
      sub_100026A20(a1, SWORD1(v4));
      sub_100026A20(a1, SWORD2(v4));
      sub_100026A20(a1, SHIWORD(v4));
      break;
    default:
      if ( under_debugger == 1 )
        BUG();
      interr(0x113u);
      if ( v12 )
        sub_100001690(v11);
      _Unwind_Resume(v11);
      return result;
  }
  return 0;
}
// 10002CE3A: variable 'v12' is possibly undefined
// 10002CE3F: variable 'v11' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
