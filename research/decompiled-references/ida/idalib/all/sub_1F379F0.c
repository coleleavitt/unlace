unsigned __int64 __fastcall sub_1F379F0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // r12
  unsigned __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // rsi
  __int64 v13; // rdi
  int v14; // r14d
  __int64 v15; // r9
  __int64 v16; // r11
  int v17; // eax
  __int64 v18; // rbx
  __int64 *v19; // r8
  __int64 (__fastcall *v20)(__int64); // rdx
  __int64 (__fastcall *v21)(__int64); // rax
  int v22; // eax
  int v23; // edi
  bool v24; // zf
  __int64 v25; // [rsp+8h] [rbp-40h] BYREF
  __int64 v26; // [rsp+10h] [rbp-38h] BYREF
  int v27; // [rsp+18h] [rbp-30h]

  v6 = *a1;
  v7 = *(_QWORD *)(*a1 + 144);
  result = *(_QWORD *)(v7 + 2320);
  if ( (*(_BYTE *)(result + 21) & 2) != 0 )
  {
    v9 = *(unsigned int *)(a2 + 56);
    v10 = *(_QWORD *)(a2 + 48);
    v27 = *(_DWORD *)(a2 + 56);
    v12 = *(unsigned int *)(v6 + 3688);
    v26 = v10;
    if ( (_DWORD)v12 )
    {
      v14 = 1;
      a5 = 0;
      for ( result = ((_DWORD)v12 - 1)
                   & ((unsigned int)((0xBF58476D1CE4E5B9LL
                                    * ((unsigned int)(37 * v9)
                                     | ((unsigned __int64)(((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4)) << 32))) >> 31)
                    ^ (756364221 * (_DWORD)v9)); ; result = ((_DWORD)v12 - 1) & (unsigned int)v17 )
      {
        v13 = *(_QWORD *)(v6 + 3672);
        v15 = v13 + 24LL * (unsigned int)result;
        v16 = *(_QWORD *)v15;
        if ( v10 == *(_QWORD *)v15 && (_DWORD)v9 == *(_DWORD *)(v15 + 8) )
        {
          v18 = *(_QWORD *)(v15 + 16);
          v19 = (__int64 *)(v15 + 16);
          if ( !v18 )
            goto LABEL_24;
          v20 = sub_A4F000;
          v21 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 32LL);
          if ( v21 != sub_A4F000 )
            v18 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64 (__fastcall *)(__int64), __int64, __int64 *))v21)(
                    *(_QWORD *)(v15 + 16),
                    v12,
                    sub_A4F000,
                    v10,
                    v19);
          v26 = a2;
          result = (unsigned __int64)sub_1742A40(v7 + 1728, &v26, (__int64)v20, v10, (__int64)v19, (__int64 *)v15);
          *(_QWORD *)result = v18;
          return result;
        }
        if ( v16 == -4096 )
        {
          if ( *(_DWORD *)(v15 + 8) == -1 )
          {
            v22 = *(_DWORD *)(v6 + 3680);
            if ( !a5 )
              a5 = v15;
            v23 = v22 + 1;
            a6 = (unsigned int)(4 * (v22 + 1));
            v25 = a5;
            if ( (unsigned int)a6 >= 3 * (int)v12 )
              goto LABEL_28;
            result = (unsigned int)(v12 - *(_DWORD *)(v6 + 3684) - v23);
            a6 = (unsigned int)v12 >> 3;
            if ( (unsigned int)result <= (unsigned int)a6 )
              goto LABEL_29;
            goto LABEL_21;
          }
        }
        else if ( v16 == -8192 && *(_DWORD *)(v15 + 8) == -2 && !a5 )
        {
          a5 = v13 + 24LL * (unsigned int)result;
        }
        v17 = v14 + result;
        ++v14;
      }
    }
    v25 = 0;
LABEL_28:
    LODWORD(v12) = 2 * v12;
LABEL_29:
    sub_1F37750((__int64 **)(v6 + 3672), v12, v9, v10, a5, a6);
    sub_1F21220((__int64 *)(v6 + 3672), &v26, &v25);
    result = *(unsigned int *)(v6 + 3680);
    v10 = v26;
    LODWORD(v9) = v27;
    a5 = v25;
    v23 = result + 1;
LABEL_21:
    v24 = *(_QWORD *)a5 == -4096;
    *(_DWORD *)(v6 + 3680) = v23;
    if ( !v24 || *(_DWORD *)(a5 + 8) != -1 )
      --*(_DWORD *)(v6 + 3684);
    *(_QWORD *)a5 = v10;
    v19 = (__int64 *)(a5 + 16);
    *((_DWORD *)v19 - 2) = v9;
    *v19 = 0;
LABEL_24:
    *v19 = a2;
  }
  return result;
}
