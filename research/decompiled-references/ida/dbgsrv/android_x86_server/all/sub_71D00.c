/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_71D00
// Address: 0x00071D00

//----- (00071D00) --------------------------------------------------------
unsigned int __cdecl sub_71D00(int a1, int a2, char a3)
{
  unsigned __int64 v3; // rax
  int v4; // eax
  int v5; // ecx
  int v6; // esi
  int v7; // esi
  int v8; // eax
  bool v9; // zf
  int v10; // eax
  unsigned int v11; // esi
  int v12; // ecx
  unsigned int v13; // edx
  unsigned int v14; // edx
  int v15; // eax
  unsigned int v16; // esi
  int v17; // ecx
  unsigned int v18; // edx
  unsigned int v19; // edx
  unsigned int v20; // edx
  bool v21; // cf
  unsigned int v22; // eax
  bool v23; // al
  int v24; // eax
  unsigned int v25; // esi
  int v26; // ecx
  unsigned int v27; // edx
  unsigned int v28; // edx
  int v29; // eax
  unsigned int v30; // esi
  int v31; // ecx
  unsigned int v32; // edx
  unsigned int v33; // edx
  unsigned int v34; // eax
  unsigned int v35; // edx
  bool v36; // cf
  bool v37; // sf
  bool v38; // of
  int v40; // [esp+Ch] [ebp-50h]
  int v41; // [esp+Ch] [ebp-50h]
  unsigned int v42; // [esp+Ch] [ebp-50h]
  unsigned int v43; // [esp+Ch] [ebp-50h]
  unsigned int v44; // [esp+Ch] [ebp-50h]
  unsigned int v45; // [esp+Ch] [ebp-50h]
  unsigned int v46; // [esp+Ch] [ebp-50h]
  unsigned int v47; // [esp+Ch] [ebp-50h]
  unsigned int v48; // [esp+Ch] [ebp-50h]
  unsigned int v49; // [esp+Ch] [ebp-50h]
  int v50; // [esp+10h] [ebp-4Ch]
  __int64 v51; // [esp+10h] [ebp-4Ch]
  __int64 v52; // [esp+10h] [ebp-4Ch]
  __int64 v53; // [esp+10h] [ebp-4Ch]
  __int64 v54; // [esp+10h] [ebp-4Ch]
  char v55[4]; // [esp+18h] [ebp-44h] BYREF
  __int64 v56; // [esp+1Ch] [ebp-40h]
  char v57[4]; // [esp+28h] [ebp-34h] BYREF
  __int64 v58; // [esp+2Ch] [ebp-30h]
  char v59[4]; // [esp+38h] [ebp-24h] BYREF
  __int64 v60; // [esp+3Ch] [ebp-20h]
  unsigned int v61; // [esp+48h] [ebp-14h]

  v61 = __readgsdword(0x14u);
  sub_71530(a1, a2, a3);
  while ( 1 )
  {
    while ( 1 )
    {
      v59[0] = 1;
      v60 = 0;
      LODWORD(v3) = *(unsigned __int16 *)(*(_DWORD *)(a1 + 228) + 12);
      if ( (_DWORD)v3 != 45 )
        break;
      sub_71530(a1, (int)v59, 1);
      *(_QWORD *)(a2 + 4) -= v60;
    }
    if ( (unsigned __int16)v3 != 43 )
      break;
    sub_71530(a1, (int)v59, 1);
    *(_QWORD *)(a2 + 4) += v60;
  }
  while ( 1 )
  {
    v57[0] = 1;
    v58 = 0;
    if ( (unsigned __int16)v3 != 15420 )
      break;
    sub_71530(a1, (int)v57, 1);
    while ( 1 )
    {
      while ( 1 )
      {
        v59[0] = 1;
        v60 = 0;
        v8 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 228) + 12);
        if ( v8 != 45 )
          break;
        sub_71530(a1, (int)v59, 1);
        v58 -= v60;
      }
      if ( (unsigned __int16)v8 != 43 )
        break;
      sub_71530(a1, (int)v59, 1);
      v58 += v60;
    }
    v3 = *(_QWORD *)(a2 + 4) << (v58 & 0x1F);
    v9 = (v58 & 0x20) == 0;
    if ( (v58 & 0x20) != 0 )
      HIDWORD(v3) = *(_QWORD *)(a2 + 4) << (v58 & 0x1F);
    v7 = a2;
    *(_DWORD *)(a2 + 8) = HIDWORD(v3);
    if ( !v9 )
      LODWORD(v3) = 0;
LABEL_7:
    *(_DWORD *)(v7 + 4) = v3;
    LOWORD(v3) = *(_WORD *)(*(_DWORD *)(a1 + 228) + 12);
  }
  if ( (unsigned __int16)v3 == 15934 )
  {
    sub_71530(a1, (int)v57, 1);
    while ( 1 )
    {
      while ( 1 )
      {
        v59[0] = 1;
        v60 = 0;
        v4 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 228) + 12);
        if ( v4 != 45 )
          break;
        sub_71530(a1, (int)v59, 1);
        v58 -= v60;
      }
      if ( (unsigned __int16)v4 != 43 )
        break;
      sub_71530(a1, (int)v59, 1);
      v58 += v60;
    }
    v40 = *(_DWORD *)(a2 + 8);
    v50 = v40 >> v58;
    v3 = *(_QWORD *)(a2 + 4) >> (v58 & 0x1F);
    v5 = v40 >> 31;
    v6 = v3;
    if ( (v58 & 0x20) != 0 )
      v6 = v40 >> v58;
    v41 = v6;
    if ( (v58 & 0x20) != 0 )
      LODWORD(v3) = HIDWORD(v3);
    else
      v5 = v50;
    if ( (v58 & 0x20) != 0 )
      HIDWORD(v3) = 0;
    v7 = a2;
    if ( !*(_BYTE *)a2 )
      v3 = __PAIR64__(v5, v41);
    *(_DWORD *)(a2 + 8) = HIDWORD(v3);
    goto LABEL_7;
  }
LABEL_38:
  v55[0] = 1;
  v56 = 0;
  if ( (__int16)v3 <= 15420 )
  {
    if ( (unsigned __int16)v3 == 60 )
    {
      sub_71530(a1, (int)v55, 1);
      while ( 1 )
      {
        while ( 1 )
        {
          v59[0] = 1;
          v60 = 0;
          v24 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 228) + 12);
          if ( v24 != 45 )
            break;
          sub_71530(a1, (int)v59, 1);
          v56 -= v60;
        }
        if ( (unsigned __int16)v24 != 43 )
          break;
        sub_71530(a1, (int)v59, 1);
        v56 += v60;
      }
      while ( 1 )
      {
        v57[0] = 1;
        v58 = 0;
        if ( (unsigned __int16)v24 == 15420 )
        {
          sub_71530(a1, (int)v57, 1);
          while ( 1 )
          {
            while ( 1 )
            {
              v59[0] = 1;
              v60 = 0;
              v24 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 228) + 12);
              if ( v24 != 45 )
                break;
              sub_71530(a1, (int)v59, 1);
              v58 -= v60;
            }
            if ( (unsigned __int16)v24 != 43 )
              break;
            sub_71530(a1, (int)v59, 1);
            v58 += v60;
          }
          v28 = (_DWORD)v56 << v58;
          v25 = (unsigned __int64)(v56 << v58) >> 32;
          if ( (v58 & 0x20) != 0 )
          {
            v25 = (_DWORD)v56 << v58;
            v28 = 0;
          }
        }
        else
        {
          if ( (unsigned __int16)v24 != 15934 )
          {
            v48 = *(_DWORD *)(a2 + 4);
            v34 = *(_DWORD *)(a2 + 8);
            if ( *(_BYTE *)a2 )
            {
              v23 = __PAIR64__(v34, v48) < v56;
            }
            else if ( v55[0] )
            {
              v23 = __PAIR64__(v34, v48) < v56;
            }
            else
            {
              v23 = __SPAIR64__(v34, v48) < v56;
            }
            goto LABEL_37;
          }
          sub_71530(a1, (int)v57, 1);
          while ( 1 )
          {
            while ( 1 )
            {
              v59[0] = 1;
              v60 = 0;
              v24 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 228) + 12);
              if ( v24 != 45 )
                break;
              sub_71530(a1, (int)v59, 1);
              v58 -= v60;
            }
            if ( (unsigned __int16)v24 != 43 )
              break;
            sub_71530(a1, (int)v59, 1);
            v58 += v60;
          }
          v53 = v56 >> (v58 & 0x1F);
          v25 = HIDWORD(v56) >> v58;
          v26 = SHIDWORD(v56) >> 31;
          v27 = v53;
          if ( (v58 & 0x20) != 0 )
            v27 = HIDWORD(v53);
          v46 = v27;
          if ( (v58 & 0x20) == 0 )
            v26 = HIDWORD(v53);
          v28 = v53;
          if ( (v58 & 0x20) != 0 )
          {
            v28 = HIDWORD(v56) >> v58;
            v25 = 0;
          }
          if ( !v55[0] )
          {
            v28 = v46;
            v25 = v26;
          }
        }
        v56 = __PAIR64__(v25, v28);
      }
    }
    if ( (unsigned __int16)v3 != 62 )
      return __readgsdword(0x14u);
    sub_71530(a1, (int)v55, 1);
    while ( 1 )
    {
      while ( 1 )
      {
        v59[0] = 1;
        v60 = 0;
        v10 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 228) + 12);
        if ( v10 != 45 )
          break;
        sub_71530(a1, (int)v59, 1);
        v56 -= v60;
      }
      if ( (unsigned __int16)v10 != 43 )
        break;
      sub_71530(a1, (int)v59, 1);
      v56 += v60;
    }
    while ( 1 )
    {
      v57[0] = 1;
      v58 = 0;
      if ( (unsigned __int16)v10 == 15420 )
      {
        sub_71530(a1, (int)v57, 1);
        while ( 1 )
        {
          while ( 1 )
          {
            v59[0] = 1;
            v60 = 0;
            v10 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 228) + 12);
            if ( v10 != 45 )
              break;
            sub_71530(a1, (int)v59, 1);
            v58 -= v60;
          }
          if ( (unsigned __int16)v10 != 43 )
            break;
          sub_71530(a1, (int)v59, 1);
          v58 += v60;
        }
        v14 = (_DWORD)v56 << v58;
        v11 = (unsigned __int64)(v56 << v58) >> 32;
        if ( (v58 & 0x20) != 0 )
        {
          v11 = (_DWORD)v56 << v58;
          v14 = 0;
        }
      }
      else
      {
        if ( (unsigned __int16)v10 != 15934 )
        {
          v20 = *(_DWORD *)(a2 + 4);
          v44 = *(_DWORD *)(a2 + 8);
          if ( *(_BYTE *)a2 )
          {
            v21 = (unsigned int)v56 < v20;
            goto LABEL_185;
          }
          if ( v55[0] )
          {
            v21 = (unsigned int)v56 < v20;
LABEL_185:
            v23 = HIDWORD(v56) < v21 + v44;
          }
          else
          {
            v23 = v56 < __SPAIR64__(v44, v20);
          }
LABEL_37:
          *(_DWORD *)(a2 + 4) = v23;
          *(_DWORD *)(a2 + 8) = 0;
          *(_BYTE *)a2 = 0;
          LOWORD(v3) = *(_WORD *)(*(_DWORD *)(a1 + 228) + 12);
          goto LABEL_38;
        }
        sub_71530(a1, (int)v57, 1);
        while ( 1 )
        {
          while ( 1 )
          {
            v59[0] = 1;
            v60 = 0;
            v10 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 228) + 12);
            if ( v10 != 45 )
              break;
            sub_71530(a1, (int)v59, 1);
            v58 -= v60;
          }
          if ( (unsigned __int16)v10 != 43 )
            break;
          sub_71530(a1, (int)v59, 1);
          v58 += v60;
        }
        v51 = v56 >> (v58 & 0x1F);
        v11 = HIDWORD(v56) >> v58;
        v12 = SHIDWORD(v56) >> 31;
        v13 = v51;
        if ( (v58 & 0x20) != 0 )
          v13 = HIDWORD(v51);
        v42 = v13;
        if ( (v58 & 0x20) == 0 )
          v12 = HIDWORD(v51);
        v14 = v51;
        if ( (v58 & 0x20) != 0 )
        {
          v14 = HIDWORD(v56) >> v58;
          v11 = 0;
        }
        if ( !v55[0] )
        {
          v14 = v42;
          v11 = v12;
        }
      }
      v56 = __PAIR64__(v11, v14);
    }
  }
  if ( (unsigned __int16)v3 == 15421 )
  {
    sub_71530(a1, (int)v55, 1);
    while ( 1 )
    {
      while ( 1 )
      {
        v59[0] = 1;
        v60 = 0;
        v29 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 228) + 12);
        if ( v29 != 45 )
          break;
        sub_71530(a1, (int)v59, 1);
        v56 -= v60;
      }
      if ( (unsigned __int16)v29 != 43 )
        break;
      sub_71530(a1, (int)v59, 1);
      v56 += v60;
    }
    while ( 1 )
    {
      v57[0] = 1;
      v58 = 0;
      if ( (unsigned __int16)v29 == 15420 )
      {
        sub_71530(a1, (int)v57, 1);
        while ( 1 )
        {
          while ( 1 )
          {
            v59[0] = 1;
            v60 = 0;
            v29 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 228) + 12);
            if ( v29 != 45 )
              break;
            sub_71530(a1, (int)v59, 1);
            v58 -= v60;
          }
          if ( (unsigned __int16)v29 != 43 )
            break;
          sub_71530(a1, (int)v59, 1);
          v58 += v60;
        }
        v33 = (_DWORD)v56 << v58;
        v30 = (unsigned __int64)(v56 << v58) >> 32;
        if ( (v58 & 0x20) != 0 )
        {
          v30 = (_DWORD)v56 << v58;
          v33 = 0;
        }
      }
      else
      {
        if ( (unsigned __int16)v29 != 15934 )
        {
          v35 = *(_DWORD *)(a2 + 4);
          v49 = *(_DWORD *)(a2 + 8);
          if ( *(_BYTE *)a2 )
          {
            v36 = (unsigned int)v56 < v35;
          }
          else
          {
            if ( !v55[0] )
            {
              v38 = __OFSUB__(v56, __PAIR64__(v49, v35));
              v37 = (((v56 - __PAIR64__(v49, v35)) >> 32) & 0x80000000) != 0LL;
LABEL_197:
              v23 = v37 == v38;
              goto LABEL_37;
            }
            v36 = (unsigned int)v56 < v35;
          }
          v23 = HIDWORD(v56) >= v36 + v49;
          goto LABEL_37;
        }
        sub_71530(a1, (int)v57, 1);
        while ( 1 )
        {
          while ( 1 )
          {
            v59[0] = 1;
            v60 = 0;
            v29 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 228) + 12);
            if ( v29 != 45 )
              break;
            sub_71530(a1, (int)v59, 1);
            v58 -= v60;
          }
          if ( (unsigned __int16)v29 != 43 )
            break;
          sub_71530(a1, (int)v59, 1);
          v58 += v60;
        }
        v54 = v56 >> (v58 & 0x1F);
        v30 = HIDWORD(v56) >> v58;
        v31 = SHIDWORD(v56) >> 31;
        v32 = v54;
        if ( (v58 & 0x20) != 0 )
          v32 = HIDWORD(v54);
        v47 = v32;
        if ( (v58 & 0x20) == 0 )
          v31 = HIDWORD(v54);
        v33 = v54;
        if ( (v58 & 0x20) != 0 )
        {
          v33 = HIDWORD(v56) >> v58;
          v30 = 0;
        }
        if ( !v55[0] )
        {
          v33 = v47;
          v30 = v31;
        }
      }
      v56 = __PAIR64__(v30, v33);
    }
  }
  if ( (unsigned __int16)v3 == 15933 )
  {
    sub_71530(a1, (int)v55, 1);
    while ( 1 )
    {
      while ( 1 )
      {
        v59[0] = 1;
        v60 = 0;
        v15 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 228) + 12);
        if ( v15 != 45 )
          break;
        sub_71530(a1, (int)v59, 1);
        v56 -= v60;
      }
      if ( (unsigned __int16)v15 != 43 )
        break;
      sub_71530(a1, (int)v59, 1);
      v56 += v60;
    }
    while ( 1 )
    {
      v57[0] = 1;
      v58 = 0;
      if ( (unsigned __int16)v15 == 15420 )
      {
        sub_71530(a1, (int)v57, 1);
        while ( 1 )
        {
          while ( 1 )
          {
            v59[0] = 1;
            v60 = 0;
            v15 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 228) + 12);
            if ( v15 != 45 )
              break;
            sub_71530(a1, (int)v59, 1);
            v58 -= v60;
          }
          if ( (unsigned __int16)v15 != 43 )
            break;
          sub_71530(a1, (int)v59, 1);
          v58 += v60;
        }
        v19 = (_DWORD)v56 << v58;
        v16 = (unsigned __int64)(v56 << v58) >> 32;
        if ( (v58 & 0x20) != 0 )
        {
          v16 = (_DWORD)v56 << v58;
          v19 = 0;
        }
      }
      else
      {
        if ( (unsigned __int16)v15 != 15934 )
        {
          v45 = *(_DWORD *)(a2 + 4);
          v22 = *(_DWORD *)(a2 + 8);
          if ( *(_BYTE *)a2 )
          {
            v23 = __PAIR64__(v22, v45) >= v56;
            goto LABEL_37;
          }
          if ( v55[0] )
          {
            v23 = __PAIR64__(v22, v45) >= v56;
            goto LABEL_37;
          }
          v38 = __OFSUB__(__PAIR64__(v22, v45), v56);
          v37 = (((__PAIR64__(v22, v45) - v56) >> 32) & 0x80000000) != 0LL;
          goto LABEL_197;
        }
        sub_71530(a1, (int)v57, 1);
        while ( 1 )
        {
          while ( 1 )
          {
            v59[0] = 1;
            v60 = 0;
            v15 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 228) + 12);
            if ( v15 != 45 )
              break;
            sub_71530(a1, (int)v59, 1);
            v58 -= v60;
          }
          if ( (unsigned __int16)v15 != 43 )
            break;
          sub_71530(a1, (int)v59, 1);
          v58 += v60;
        }
        v52 = v56 >> (v58 & 0x1F);
        v16 = HIDWORD(v56) >> v58;
        v17 = SHIDWORD(v56) >> 31;
        v18 = v52;
        if ( (v58 & 0x20) != 0 )
          v18 = HIDWORD(v52);
        v43 = v18;
        if ( (v58 & 0x20) == 0 )
          v17 = HIDWORD(v52);
        v19 = v52;
        if ( (v58 & 0x20) != 0 )
        {
          v19 = HIDWORD(v56) >> v58;
          v16 = 0;
        }
        if ( !v55[0] )
        {
          v19 = v43;
          v16 = v17;
        }
      }
      v56 = __PAIR64__(v16, v19);
    }
  }
  return __readgsdword(0x14u);
}
