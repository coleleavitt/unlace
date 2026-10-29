__int64 __fastcall sub_EE4B00(__int64 a1, char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r14
  char v8; // al
  unsigned __int64 v9; // r14
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 i; // r15
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbp
  _QWORD *v21; // rax
  __int64 *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  char v27; // [rsp+7h] [rbp-61h]
  __m128 v28; // [rsp+10h] [rbp-58h] BYREF
  char v29; // [rsp+20h] [rbp-48h]

  if ( (char *)a3 == a2 )
  {
    v9 = *(_QWORD *)(a1 + 256);
    v27 = *(_BYTE *)(a1 + 264);
  }
  else
  {
    v7 = *(_QWORD *)(sub_EDE580(*(_QWORD *)a1, a2, a3, a4, a5, a6)[9] + 48LL);
    v8 = v7 >> 2;
    v9 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    v27 = v8 & 1;
  }
  result = sub_A7A590((__int64)a2, (__int64)a2, a3, a4, a5, a6);
  v12 = v11;
  if ( result != v11 )
  {
    for ( i = result; v12 != i; i += 24 )
    {
      v14 = sub_ED6580(*(__int64 **)(i + 16));
      v15 = sub_F63270(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL));
      v20 = v15;
      if ( (*(_BYTE *)(i + 12) & 1) == 0 || v9 == v15 && v27 == 1 )
        goto LABEL_8;
      if ( *(_BYTE *)(a1 + 340) )
      {
        v21 = *(_QWORD **)(a1 + 320);
        v16 = (__int64)&v21[*(unsigned int *)(a1 + 332)];
        if ( v21 != (_QWORD *)v16 )
        {
          while ( v20 != *v21 )
          {
            if ( (_QWORD *)v16 == ++v21 )
              goto LABEL_16;
          }
          goto LABEL_8;
        }
      }
      else if ( sub_2236570(a1 + 320, v15) )
      {
        goto LABEL_8;
      }
LABEL_16:
      result = (__int64)sub_ED82B0(&v28, a1 + 608, v20);
      if ( v29 )
      {
        v28.m128_u64[0] = v20;
        v22 = sub_ED6490((__int64 *)(a1 + 848), (__int64 *)&v28);
        if ( v22 )
          v22 = (__int64 *)v22[1];
        sub_EE48A0((__int64 *)a1, v22, v23, v24, v25, v26);
LABEL_8:
        sub_7052B0((__int64 *)(*(_QWORD *)(v20 + 104) + 96LL), *(_QWORD *)(v20 + 104), v16, v17, v18, v19);
        result = *(unsigned int *)(*(_QWORD *)(v20 + 128) + 20LL);
        if ( (_DWORD)result )
          result = sub_EE4B00(a1, v20, a3);
      }
    }
  }
  return result;
}
