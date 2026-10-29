char __fastcall sub_1F4E180(__int64 *a1, __int64 a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // r14d
  __int64 v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64); // rax
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 *v26; // rcx
  __int64 v27; // rdi
  __int64 *v28; // rdx
  __int64 *v29; // rcx
  __int64 *v30; // rdx
  __int64 v32; // [rsp+8h] [rbp-40h]

  v7 = a5;
  v10 = a1[2];
  v11 = *(unsigned int *)(v10 + 24);
  v12 = *(_QWORD **)(*a1 + 144);
  v13 = (__int64)(v12 + 294);
  *(_DWORD *)(v10 + 24) = v11 + 1;
  if ( *(_QWORD *)(*(_QWORD *)(v10 + 32) + 8 * v11) )
  {
    v14 = v12[294];
    v12[304] += 144LL;
    v15 = (v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v12[295] >= (unsigned __int64)(v15 + 144) && v14 )
      v12[294] = v15 + 144;
    else
      v15 = sub_986170(v13, 144, 144, 3, a5, a6);
    sub_B96900((_QWORD *)v15, a2);
    *(_WORD *)v15 &= 0xFE7Fu;
    *(_BYTE *)(v15 + 10) |= 0x20u;
    *(_QWORD *)(v15 + 104) = 0;
    *(_DWORD *)(v15 + 112) = 0;
    *(_QWORD *)(v15 + 120) = 0;
    *(_QWORD *)(v15 + 128) = 0;
    *(_QWORD *)(v15 + 136) = 0;
  }
  else
  {
    v24 = v12[294];
    v12[304] += 104LL;
    v15 = (v24 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v12[295] >= (unsigned __int64)(v15 + 104) && v24 )
      v12[294] = v15 + 104;
    else
      v15 = sub_986170(v13, 104, 104, 3, a5, a6);
    sub_B96900((_QWORD *)v15, a2);
  }
  v16 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
  if ( v16 == sub_A01140 )
    v17 = sub_B70A60(a2);
  else
    v17 = v16(a2);
  v19 = *(_QWORD *)(v17 + 128);
  if ( !v19 )
  {
    *(_QWORD *)(v17 + 128) = v15;
    v19 = v15;
  }
  *(_QWORD *)(a2 + 128) = v19;
  v32 = v17;
  sub_1F36AB0(a1, v15, a2, a4, v7, v18);
  LOBYTE(v23) = v32;
  *(_BYTE *)(a2 + 74) |= 1u;
  if ( *(_QWORD *)(v32 + 128) != v15 )
  {
    LOBYTE(v23) = sub_1F3F870(a1 + 1, v32, (char *)v15, v20, v21, v22);
    return (char)v23;
  }
  if ( a2 != v32 || a3 )
  {
    v25 = *a1;
    if ( !*(_BYTE *)(*a1 + 4028) )
      goto LABEL_26;
    v26 = *(__int64 **)(v25 + 4008);
    v27 = *(unsigned int *)(v25 + 4020);
    v28 = &v26[v27];
    if ( v26 != v28 )
    {
      v23 = *(__int64 **)(v25 + 4008);
      if ( a2 == *v26 )
        goto LABEL_37;
      while ( v28 != ++v23 )
      {
        if ( a2 == *v23 )
          goto LABEL_37;
      }
    }
    if ( (unsigned int)v27 < *(_DWORD *)(v25 + 4016) )
    {
      *(_DWORD *)(v25 + 4020) = v27 + 1;
      *v28 = a2;
      v26 = *(__int64 **)(v25 + 4008);
      v23 = &v26[v27];
    }
    else
    {
LABEL_26:
      v23 = (__int64 *)sub_2236760(v25 + 4008, a2);
      v26 = *(__int64 **)(v25 + 4008);
      if ( !*(_BYTE *)(v25 + 4028) )
      {
        v29 = &v26[*(unsigned int *)(v25 + 4016)];
LABEL_28:
        if ( v23 != v29 && (unsigned __int64)*v23 >= 0xFFFFFFFFFFFFFFFELL )
        {
          ++v23;
          do
          {
            v30 = v23;
            if ( v29 == v23 )
              break;
            ++v23;
          }
          while ( (unsigned __int64)*v30 >= 0xFFFFFFFFFFFFFFFELL );
        }
        return (char)v23;
      }
    }
LABEL_37:
    v29 = &v26[*(unsigned int *)(v25 + 4020)];
    goto LABEL_28;
  }
  return (char)v23;
}
