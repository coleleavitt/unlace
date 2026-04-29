__int64 __fastcall sub_AEF30(__int64 a1, char *a2, __int64 a3, char a4, __int64 a5, int a6)
{
  unsigned int v6; // r10d
  unsigned int v7; // eax
  __int64 v10; // rdx
  signed int v11; // eax
  int v12; // ecx
  __int64 v13; // r12
  int v14; // eax
  char v15; // al
  char v16; // al
  char v17; // al
  unsigned int v18; // ebx
  char v19; // al
  char v20; // al
  unsigned int *v22; // r12
  __int64 v23; // rdx
  int v24; // r9d
  __int64 v25; // rbp
  __int64 v26; // r12
  char v27; // al
  unsigned int v28; // r13d
  char v29; // al
  char v30; // al
  char v31; // al
  char v32; // al
  char v33; // al
  unsigned int v34; // eax
  char v35; // al
  __int64 v36; // rdx
  char v37; // al
  unsigned __int8 v38; // r10
  char v39; // al
  char v40; // al
  unsigned __int8 v41; // [rsp+0h] [rbp-98h]
  __int64 v42; // [rsp+10h] [rbp-88h]
  unsigned __int8 v43; // [rsp+1Fh] [rbp-79h]
  unsigned __int64 v44; // [rsp+20h] [rbp-78h] BYREF
  __int64 v45; // [rsp+28h] [rbp-70h]
  _BYTE v46[40]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v47; // [rsp+58h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  LOBYTE(v6) = a2 == 0 || a3 == 0;
  if ( (_BYTE)v6 )
    return 0;
  v7 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 == 7 )
    return sub_AE660(a1, (__int64)a2, a3, a4);
  if ( v7 > 7 )
  {
    if ( v7 - 19 > 2 )
      return 0;
    return sub_AE660(a1, (__int64)a2, a3, a4);
  }
  if ( v7 != 4 )
    return 0;
  v10 = *(_QWORD *)(a1 + 480);
  v11 = *((_DWORD *)a2 + 17);
  v12 = *(_DWORD *)(a3 + 68);
  v13 = *(_QWORD *)(v10 + 112);
  if ( v11 != v12 )
  {
    v14 = v12 + v11;
    if ( *(unsigned __int8 *)(v10 + 137) == v14 || v14 == *(_QWORD *)(*(_QWORD *)(v10 + 8) + 120LL) )
    {
      if ( *(_DWORD *)a2 != 4 )
        return v6;
      v25 = *(_QWORD *)(a1 + 64);
      v26 = *(_QWORD *)(v25 + 1504);
      v27 = sub_9FE70(v26, (__int64)(a2 + 64), a3 + 64);
      v6 = 0;
      if ( !v27 )
        return v6;
      v28 = *((_DWORD *)a2 + 17) + *(_DWORD *)(a3 + 68);
      v29 = sub_A7E10(v25, a2 + 64, v28);
      v6 = 0;
      if ( !v29 )
        return v6;
      v30 = *(_BYTE *)(a3 + 32);
      if ( a2[32] == 2 )
      {
        if ( v30 != 2 )
          return v6;
        v35 = sub_11D940(a2 + 32, &v44, 0);
        LOBYTE(v6) = 0;
        if ( v35 )
        {
          if ( !v44 )
          {
            v40 = sub_11D940(a3 + 32, &v44, 0);
            v6 = 0;
            if ( v40 )
            {
              if ( !v44 )
                return v6;
            }
          }
        }
        v36 = *((int *)a2 + 9);
        v43 = v6;
        v44 = 0xFFFFFFFF00000000LL;
        v45 = 0;
        v42 = v36;
        __memcpy_chk();
        memcpy(&v46[v42], (const void *)(*(_QWORD *)(a3 + 40) + 16LL), *(int *)(a3 + 36));
        v37 = sub_11AF20(&v44, v26, v46, (int)v28);
        v38 = v43;
        if ( !v37 || (v39 = sub_128630(a2 + 64, v26, v28, 1), v38 = v43, !v39) )
        {
          v41 = v38;
          sub_11A960(&v44);
          return v41;
        }
        sub_11A5D0(a2 + 32, &v44);
        sub_11A960(&v44);
      }
      else
      {
        if ( v30 == 2 )
          return v6;
        v31 = sub_9FE70(v26, (__int64)(a2 + 32), a3 + 32);
        v6 = 0;
        if ( !v31 )
          return v6;
        v32 = sub_A7E10(v25, a2 + 32, v28);
        v6 = 0;
        if ( !v32 )
          return v6;
        if ( a2[32] == 1 )
          return v6;
        v33 = sub_11FC90(a2, v26, v28, 257, 1);
        v6 = 0;
        if ( !v33 )
          return v6;
      }
      v34 = *((_DWORD *)a2 + 1);
      *(_DWORD *)a2 = 67;
      *((_DWORD *)a2 + 1) = v34 | 0x10;
      if ( *(char *)(a3 + 4) >= 0 )
      {
        LOBYTE(v34) = v34 & 0x7F;
        *((_DWORD *)a2 + 1) = v34 | 0x10;
      }
      sub_11B190(a2, v26);
      sub_11B160(a3);
    }
    else
    {
      v15 = sub_11FD40(a3, *((_QWORD *)a2 + 1), 0);
      v6 = 0;
      if ( !v15 )
        return v6;
      v16 = sub_11D940(a3 + 32, &v44, 0);
      v6 = 0;
      if ( !v16 )
        return v6;
      if ( v44 )
        return v6;
      v17 = sub_32B910(*(unsigned int *)a2);
      v6 = 0;
      if ( !v17 )
        return v6;
      v18 = *((_DWORD *)a2 + 17) - *(_DWORD *)(a3 + 68);
      v19 = sub_11A640(v18);
      v6 = 0;
      if ( !v19 )
        return v6;
      v20 = sub_124F10(a3 + 64, v13, a2 + 64);
      v6 = 0;
      if ( !v20 )
        return v6;
      v45 = 0;
      v44 = 0xFFFFFFFF00000000LL;
      sub_123DE0(&v44, a2);
      sub_128E00(&v44, v13, *((_QWORD *)a2 + 3), v18);
      *((_DWORD *)a2 + 1) &= ~0x10u;
      *(_DWORD *)a2 = 9;
      sub_122C80(a2 + 32);
      sub_11A960(a2 + 48);
      if ( *(char *)(a3 + 4) >= 0 )
        *((_DWORD *)a2 + 1) &= ~0x80u;
      sub_11B190(a2, v13);
      sub_11B160(a3);
      sub_11A960(&v44);
    }
    return 1;
  }
  if ( v11 >= *(_DWORD *)(v13 + 88) )
    return 0;
  v22 = (unsigned int *)(a2 + 64);
  if ( a2[64] == 8 )
  {
    v23 = *((_QWORD *)a2 + 9);
    if ( !*(_QWORD *)(v23 + 56) )
      return 0;
    v22 = *(unsigned int **)(v23 + 48);
    if ( v11 != v22[1] )
      return 0;
  }
  if ( !(unsigned __int8)sub_12AA10(*(_QWORD *)(a1 + 64), (_DWORD)v22, (int)a3 + 64, 0, 0, a6) )
    return 0;
  return sub_ABBA0(a1, a2, a3, a4, v22, v24);
}
