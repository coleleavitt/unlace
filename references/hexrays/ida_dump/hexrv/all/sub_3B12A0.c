char __fastcall sub_3B12A0(__int64 a1, __m128 a2)
{
  __int64 v3; // rax
  __int64 v4; // r9
  char result; // al
  __int64 v6; // rsi
  signed int v7; // esi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  const char *v12; // rax
  const char *v13; // rbp
  size_t v14; // rax
  size_t v15; // r14
  size_t v16; // r12
  char *v17; // r12
  char *v18; // rax
  char *v19; // rbp
  unsigned int i; // edi
  char v21; // [rsp+Fh] [rbp-49h]
  char *v22; // [rsp+10h] [rbp-48h] BYREF
  __int128 v23; // [rsp+18h] [rbp-40h]
  unsigned __int64 v24; // [rsp+28h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  sub_386210(a1, 0);
  v3 = sub_3884E0(a1 + 80);
  if ( v3 != -1 )
  {
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(16, 5, &v22, v3, &callui, v4);
    return sub_3953B0(a1, (unsigned __int64)v22, -1, 0, 0xFFFF, 1u);
  }
  v6 = sub_3884A0(a1 + 80);
  if ( v6 )
    return sub_3B07E0(a1, v6, a2);
  v7 = sub_3A7980(a1);
  if ( v7 != -1 )
    return sub_3B0AB0(a1, v7, a2);
  if ( *(_DWORD *)(a1 + 80) != 1 )
    return 0;
  v10 = *(_QWORD *)(a1 + 88);
  v11 = *(_DWORD *)(v10 + 8);
  if ( (unsigned int)(v11 - 59) <= 1 )
    return sub_3B0D80(a1, (__int64 *)(*(_QWORD *)(v10 + 24) + 48LL), *(unsigned int *)(v10 + 32), a2);
  if ( (unsigned int)(v11 - 73) > 0xB )
    return 0;
  v12 = (const char *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
                        70,
                        *(_QWORD *)(a1 + 8),
                        0,
                        &callui,
                        v8,
                        v9);
  v13 = v12;
  if ( !v12 )
    return 0;
  v22 = nullptr;
  v23 = 0;
  v14 = strlen(v12);
  v15 = v14 + 1;
  v16 = v14;
  v22 = (char *)qvector_reserve(&v22, 0, v14 + 1, 1);
  *(_QWORD *)&v23 = v15;
  memmove(v22, v13, v16);
  v22[v16] = 0;
  if ( (unsigned __int64)v23 <= 1 || tag_remove(&v22, v22, 0) <= 0 )
  {
    result = 0;
  }
  else
  {
    v17 = &v22[*(int *)(a1 + 48)];
    v18 = (char *)skip_spaces(v22);
    v19 = v18;
    if ( v17 < v18 )
      goto LABEL_19;
    for ( i = *v18; i <= 0x7F; i = *++v19 )
    {
      if ( !isalpha(i) )
        break;
    }
    if ( v19 < v17 )
    {
LABEL_19:
      if ( v22 )
      {
        *(_QWORD *)&v23 = 0;
        qfree(v22);
      }
      return 0;
    }
    result = sub_3B0FD0(a1, *(_DWORD *)(*(_QWORD *)(a1 + 88) + 8LL), (__m128)0LL);
  }
  if ( v22 )
  {
    v21 = result;
    *(_QWORD *)&v23 = 0;
    qfree(v22);
    return v21;
  }
  return result;
}
