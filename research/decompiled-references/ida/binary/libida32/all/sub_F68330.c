unsigned __int64 __fastcall sub_F68330(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r12
  unsigned __int64 i; // rbx
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rbp
  __int64 v24; // rdx
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  __int64 *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  _QWORD *v35; // rax
  __int64 *v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // [rsp+8h] [rbp-60h]
  __m128 v42; // [rsp+10h] [rbp-58h] BYREF
  char v43; // [rsp+20h] [rbp-48h]

  result = sub_A56850(a2, a2, a3, a4, a5, a6);
  if ( result != v8 )
  {
    v11 = v8;
    for ( i = result; v11 != i; i += 24LL )
    {
      v13 = sub_F55F20(*(__int64 **)(i + 16), a2, v8, v9, v10);
      v18 = sub_F3F530(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL), a2, v14, v15, v16, v17);
      v23 = (__int64)v18;
      if ( (*(_BYTE *)(i + 12) & 1) != 0 )
      {
        sub_6E4DB0((__int64 *)(v18[13] + 96LL), v18[13], v19, v20, v21, v22);
        if ( (*(_BYTE *)(*(_QWORD *)(v23 + 128) + 1LL) & 4) != 0 )
        {
          if ( *(_BYTE *)(a1 + 828) )
            goto LABEL_10;
        }
        else
        {
          sub_6E4DB0((__int64 *)(*(_QWORD *)(v23 + 104) + 96LL), *(_QWORD *)(v23 + 104), v24, v20, v21, v22);
          v19 = *(unsigned int *)(*(_QWORD *)(v23 + 128) + 20LL);
          if ( !(_DWORD)v19 )
            goto LABEL_4;
          if ( *(_BYTE *)(a1 + 828) )
          {
LABEL_10:
            v25 = *(_QWORD **)(a1 + 808);
            v19 = (__int64)&v25[*(unsigned int *)(a1 + 820)];
            if ( v25 != (_QWORD *)v19 )
            {
              while ( v23 != *v25 )
              {
                if ( (_QWORD *)v19 == ++v25 )
                  goto LABEL_13;
              }
              goto LABEL_4;
            }
LABEL_13:
            sub_EB4570(&v42, a3, v23);
            if ( v43 )
            {
              v26 = sub_EBA840(*(_QWORD *)(a1 + 40), *(char **)(a1 + 8), v19, v20, v21, v22);
              v41 = sub_F5E070(v26 + 9, v23, v27, v28, v29, v30);
              v35 = sub_EBA840(*(_QWORD *)(a1 + 40), *(char **)(a1 + 32), v31, v32, v33, v34);
              v40 = sub_F5E070(v35 + 9, v23, v36, v37, v38, v39);
              sub_F66E00(a1, (char *)v23, v41, 1u, 1u, v40);
            }
            goto LABEL_4;
          }
        }
        if ( !sub_2212830(a1 + 808, v23) )
          goto LABEL_13;
      }
LABEL_4:
      a2 = *(_QWORD *)(v23 + 104);
      sub_6E4DB0((__int64 *)(a2 + 96), a2, v19, v20, v21, v22);
      result = *(unsigned int *)(*(_QWORD *)(v23 + 128) + 20LL);
      if ( (_DWORD)result )
      {
        a2 = v23;
        result = sub_F68330(a1, v23, a3);
      }
    }
  }
  return result;
}

