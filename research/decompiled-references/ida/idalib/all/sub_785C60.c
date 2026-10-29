__int64 __fastcall sub_785C60(__int64 a1)
{
  __int64 *v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rsi
  unsigned __int64 v6; // rbp
  unsigned __int16 v7; // esi^2
  __int64 *v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdi
  size_t v12; // rdx
  const char *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v17; // [rsp+8h] [rbp-30h]
  unsigned __int64 v18; // [rsp+18h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  switch ( *(_WORD *)(a1 + 64) )
  {
    case 3:
    case 5:
      sub_785A20(a1, *(_QWORD *)(a1 + 72));
      break;
    case 4:
      ptr = nullptr;
      v17 = 0;
      sub_781790((__int64 *)&ptr, a1 + 40);
      v12 = v17;
      v13 = haystack;
      if ( (_QWORD)v17 )
      {
        v13 = (const char *)ptr;
        v12 = v17 - 1;
      }
      sub_785640(a1, v13, v12);
      if ( ptr )
      {
        *(_QWORD *)&v17 = 0;
        qfree(ptr);
      }
      break;
    case 7:
      v8 = *(__int64 **)(a1 + 200);
      *(_BYTE *)(a1 + 212) = -46;
      v9 = v8[1];
      v10 = *v8;
      if ( v8[2] < (unsigned __int64)(v9 + 1) )
      {
        v14 = qvector_reserve(v8, v10, v9 + 1, 1);
        *v8 = v14;
        v10 = v14;
        v9 = v8[1];
      }
      *(_BYTE *)(v10 + v9) = -46;
      ++v8[1];
      v11 = *(_QWORD *)(a1 + 200);
      ++*(_DWORD *)(a1 + 208);
      sub_78C630(v11, a1 + 88, 16);
      *(_DWORD *)(a1 + 208) += 16;
      break;
    case 8:
      v3 = *(__int64 **)(a1 + 200);
      *(_BYTE *)(a1 + 212) = -45;
      v4 = v3[1];
      v5 = *v3;
      if ( v3[2] < (unsigned __int64)(v4 + 1) )
      {
        v15 = qvector_reserve(v3, v5, v4 + 1, 1);
        *v3 = v15;
        v5 = v15;
        v4 = v3[1];
      }
      *(_BYTE *)(v5 + v4) = -45;
      ++v3[1];
      v6 = *(_QWORD *)(a1 + 88);
      ++*(_DWORD *)(a1 + 208);
      sub_7847B0(a1, v6);
      v7 = WORD1(v6);
      v6 >>= 32;
      sub_7847B0(a1, v7);
      sub_7847B0(a1, v6);
      sub_7847B0(a1, WORD1(v6));
      break;
    default:
      if ( !under_debugger )
        interr(275);
      BUG();
  }
  return 0;
}
