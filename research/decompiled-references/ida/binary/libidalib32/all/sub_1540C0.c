unsigned __int64 __fastcall sub_1540C0(__int64 a1, __int64 *a2, __int64 a3, char a4)
{
  __int64 v6; // rax
  int v7; // r12d
  unsigned __int64 v9; // rdx
  int v10; // r12d
  int v11; // esi
  int v12; // esi
  __int64 **v13; // rsi
  char *v14; // rdi
  __int64 *v15; // r10
  __int64 v16; // rdx
  __int64 i; // r9
  int v18; // r8d
  int v19; // eax
  unsigned __int64 v20; // r11
  unsigned __int64 v21; // rcx
  int v22; // r11d
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r9
  int v27; // r8d
  int v28; // eax
  unsigned __int64 v29; // r10
  unsigned __int64 v30; // rcx
  int v31; // r10d
  __int64 v32; // rax
  unsigned __int64 v33; // rcx
  char *v35; // rsi
  __int64 v36; // rax
  _QWORD v37[2]; // [rsp+0h] [rbp-48h] BYREF
  char v38; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v39; // [rsp+18h] [rbp-30h]

  v6 = *(_QWORD *)(a1 + 960);
  v7 = *(_DWORD *)(a1 + 16);
  v39 = __readfsqword(0x28u);
  v9 = a2[1];
  v10 = *(_DWORD *)(v6 + 72) + v7;
  if ( v9 < v10 )
  {
    v35 = (char *)*a2;
    if ( a2[2] < (unsigned __int64)v10 )
    {
      v36 = qvector_reserve();
      v9 = a2[1];
      *a2 = v36;
      v35 = (char *)v36;
    }
    memset(&v35[4 * v9], 0, 4 * (v10 - v9));
    a2[1] = v10;
  }
  else if ( v10 != v9 )
  {
    a2[1] = v10;
  }
  sub_154030(a2 + 3, v10);
  if ( v10 > 0 )
  {
    v11 = 0;
    if ( !*(_WORD *)&byte_24E0E0[6] )
      v11 = a4 & 0xF;
    memset((void *)*a2, v11, 4 * a2[1]);
    v12 = 255;
    if ( !*(_WORD *)&byte_24E0E0[6] )
      v12 = a4 & 0xF0;
    memset((void *)a2[3], v12, 4 * a2[4]);
  }
  if ( *(_WORD *)&byte_24E0E0[6] )
  {
    v37[0] = a3;
    v13 = (__int64 **)v37;
    v14 = &v38;
    v37[1] = a3 + 72;
    while ( 1 )
    {
      v15 = *v13;
      v16 = **v13;
      for ( i = v16 + 16 * (*v13)[1]; i != v16; v16 += 16 )
      {
        v18 = *(_DWORD *)v16;
        v19 = *(_DWORD *)(v16 + 4);
        if ( *(_DWORD *)v16 == -1 )
        {
          if ( v19 < 0 )
            goto LABEL_37;
          v21 = a2[1];
          if ( v21 >= v19 )
            LODWORD(v21) = *(_DWORD *)(v16 + 4);
          v18 = 0;
        }
        else
        {
          v20 = a2[1];
          LODWORD(v21) = v19 + v18;
          if ( v19 + v18 < 0 || v20 < (int)v21 )
          {
            LODWORD(v21) = a2[1];
            if ( ((v20 | v18 | v19) & 0x80000000) != 0LL )
              goto LABEL_37;
          }
          else if ( (v18 | v19) < 0 )
          {
            goto LABEL_37;
          }
        }
        if ( *(_BYTE *)(v16 + 12) )
        {
          v22 = *(_DWORD *)(v16 + 8);
          if ( v22 != -1 && v18 < (int)v21 )
          {
            v23 = 4LL * v18;
            v24 = 4 * (v18 + (unsigned __int64)(unsigned int)(v21 - v18));
            do
            {
              *(_DWORD *)(*a2 + v23) = v22;
              v23 += 4;
            }
            while ( v24 != v23 );
          }
        }
      }
      v25 = v15[3];
      v26 = v25 + 16 * v15[4];
      if ( v25 != v26 )
        break;
LABEL_34:
      if ( ++v13 == (__int64 **)v14 )
        return v39 - __readfsqword(0x28u);
    }
    while ( 1 )
    {
      v27 = *(_DWORD *)v25;
      v28 = *(_DWORD *)(v25 + 4);
      if ( *(_DWORD *)v25 == -1 )
      {
        if ( v28 >= 0 )
        {
          v30 = a2[1];
          if ( v30 >= v28 )
            LODWORD(v30) = *(_DWORD *)(v25 + 4);
          v27 = 0;
          goto LABEL_28;
        }
        goto LABEL_37;
      }
      v29 = a2[1];
      LODWORD(v30) = v27 + v28;
      if ( v27 + v28 >= 0 && v29 >= (int)v30 )
        break;
      while ( 1 )
      {
        LODWORD(v30) = v29;
        if ( ((v29 | v27 | v28) & 0x80000000) == 0LL )
          break;
LABEL_37:
        if ( under_debugger )
          BUG();
        v14 = (_BYTE *)(&stru_9E70 + 4);
        v28 = interr();
      }
LABEL_28:
      if ( *(_BYTE *)(v25 + 12) )
      {
        v31 = *(_DWORD *)(v25 + 8);
        if ( v31 != -1 && (int)v30 > v27 )
        {
          v32 = 4LL * v27;
          v33 = 4 * (v27 + (unsigned __int64)(unsigned int)(v30 - v27));
          do
          {
            *(_DWORD *)(a2[3] + v32) = v31;
            v32 += 4;
          }
          while ( v33 != v32 );
        }
      }
      v25 += 16;
      if ( v26 == v25 )
        goto LABEL_34;
    }
    if ( (v27 | v28) >= 0 )
      goto LABEL_28;
    goto LABEL_37;
  }
  return v39 - __readfsqword(0x28u);
}

