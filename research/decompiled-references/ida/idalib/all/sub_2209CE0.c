__int64 __fastcall sub_2209CE0(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v5; // r13d
  __int64 v6; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r13
  __int64 v11; // r14
  unsigned __int64 v12; // rcx
  unsigned int v13; // r15d
  unsigned __int64 v14; // rbp
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // [rsp+8h] [rbp-50h]
  unsigned __int64 v18; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v19; // [rsp+18h] [rbp-40h]

  v5 = *(_DWORD *)(a2 + 8);
  if ( v5 > 0x40 )
  {
    v8 = operator new[](8 * (((unsigned __int64)v5 + 63) >> 6));
    v9 = *(unsigned int *)(a2 + 8);
    v19 = v5;
    v18 = v8;
    v10 = *a3;
    v11 = *(_QWORD *)a2;
    v12 = (unsigned __int64)(v9 + 63) >> 6;
    v13 = v12;
    if ( v12 )
    {
      v14 = v8;
      v15 = 0;
      v17 = (unsigned int)(v12 - 1);
      while ( 1 )
      {
        v16 = v14;
        v14 += 8LL;
        sub_2209A70(v16, v11, *(_QWORD *)(v10 + 8 * v15), 0, v13, v13 - v15, (_DWORD)v15 != 0);
        if ( v15 == v17 )
          break;
        ++v15;
      }
    }
    sub_CF8100(&v18);
    *(_DWORD *)(a1 + 8) = v19;
    *(_QWORD *)a1 = v18;
  }
  else
  {
    v6 = *a3 * *(_QWORD *)a2;
    *(_DWORD *)(a1 + 8) = v5;
    *(_QWORD *)a1 = v6;
    sub_CF8100((unsigned __int64 *)a1);
  }
  return a1;
}
