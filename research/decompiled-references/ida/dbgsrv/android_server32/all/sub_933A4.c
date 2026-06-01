/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_933A4
// Address: 0x000933A4

//----- (000933A4) --------------------------------------------------------
unsigned __int8 *__fastcall sub_933A4(__int64 *a1, unsigned int a2, unsigned __int8 **a3, __int64 *a4)
{
  __int64 v6; // r0
  unsigned __int8 **v7; // r2
  int v8; // r3
  int v9; // r0
  __int64 v10; // r0
  char v11; // r0
  _BYTE *v12; // r0
  __int64 *v13; // r3
  _BYTE *v14; // r6
  __int64 v15; // r0
  unsigned __int8 **v16; // r2
  _DWORD *v17; // r5
  unsigned __int8 *result; // r0
  _DWORD *v19; // r0
  _DWORD *v20; // r6
  __int64 v21; // kr00_8
  __int64 v22; // r0
  int v23; // r1
  __int64 v24; // r0
  int v25; // r3
  __int64 v26; // r0
  unsigned int v27; // r1
  int v28; // r2
  _DWORD *v29; // r0
  _BYTE *v30; // r1
  _DWORD *v31; // r0
  unsigned __int8 *v32; // r6
  __int64 v33; // r0
  __int64 v34; // r0
  _DWORD *v35; // r0
  __int64 v36; // kr08_8
  unsigned __int8 **v37; // r2
  __int64 *v38; // r3
  __int64 v39; // r0
  _DWORD *v40; // [sp+0h] [bp-38h] BYREF
  unsigned __int8 **v41; // [sp+4h] [bp-34h] BYREF
  __int64 *v42; // [sp+8h] [bp-30h]
  _BYTE **v43; // [sp+Ch] [bp-2Ch]
  unsigned __int8 *v44; // [sp+10h] [bp-28h] BYREF
  _BYTE *v45; // [sp+14h] [bp-24h] BYREF

  v40 = (_DWORD *)a2;
  v41 = a3;
  v42 = a4;
  v6 = *a1;
  if ( (_DWORD)v6 != HIDWORD(v6) && *(_BYTE *)v6 == 76 )
  {
    LODWORD(v6) = v6 + 1;
    *(_DWORD *)a1 = v6;
  }
  v7 = (unsigned __int8 **)(HIDWORD(v6) - v6);
  if ( HIDWORD(v6) == (_DWORD)v6 )
    goto LABEL_25;
  v8 = *(unsigned __int8 *)v6;
  if ( v8 == 90 )
  {
    if ( (_DWORD)v6 == HIDWORD(v6) )
      return nullptr;
    *(_DWORD *)a1 = v6 + 1;
    v12 = sub_9251C((int)a1, SHIDWORD(v6), v7);
    v45 = v12;
    if ( !v12 )
      return nullptr;
    v14 = v12;
    v15 = *a1;
    if ( (_DWORD)v15 == HIDWORD(v15) || *(_BYTE *)v15 != 69 )
      return nullptr;
    v16 = (unsigned __int8 **)(v15 + 1);
    *(_DWORD *)a1 = v15 + 1;
    if ( (_DWORD)v15 + 1 == HIDWORD(v15) )
      goto LABEL_98;
    v13 = (__int64 *)*(unsigned __int8 *)v16;
    if ( v13 == (__int64 *)((char *)&dword_70 + 3) )
    {
      LODWORD(v15) = v15 + 2;
      *(_DWORD *)a1 = v15;
      *(_DWORD *)a1 = sub_97F32((unsigned __int8 *)v15, (unsigned __int8 *)HIDWORD(v15));
      v17 = sub_97728((int)a1, (int)"string literal");
      result = (unsigned __int8 *)sub_93AC6((int)(a1 + 46), 16);
      *(_DWORD *)result = &off_DC4B8;
      *((_DWORD *)result + 1) = 16843033;
      *((_DWORD *)result + 2) = v14;
      *((_DWORD *)result + 3) = v17;
      return result;
    }
    if ( *(_BYTE *)v16 != 100 )
    {
LABEL_98:
      v41 = (unsigned __int8 **)sub_933A4(a1, a2, v16, v13);
      if ( !v41 )
        return nullptr;
      *(_DWORD *)a1 = sub_97F32(*(unsigned __int8 **)a1, *((unsigned __int8 **)a1 + 1));
    }
    else
    {
      *(_DWORD *)a1 = v15 + 2;
      sub_92AAC((unsigned __int8 **)&v41, (unsigned __int8 **)a1, 1);
      v39 = *a1;
      if ( (_DWORD)v39 == HIDWORD(v39) )
        return nullptr;
      if ( *(_BYTE *)v39 != 95 )
        return nullptr;
      *(_DWORD *)a1 = v39 + 1;
      v41 = (unsigned __int8 **)sub_933A4(a1, a2, v37, v38);
      if ( !v41 )
        return nullptr;
    }
    return (unsigned __int8 *)sub_97F98((int)a1, (int *)&v45, (int *)&v41);
  }
  if ( v8 != 83 )
  {
    if ( v8 == 78 )
    {
      v45 = (_BYTE *)a2;
      if ( (_DWORD)v6 == HIDWORD(v6) || *(_BYTE *)v6 != 78 )
        return nullptr;
      *(_DWORD *)a1 = v6 + 1;
      v9 = sub_94068(a1);
      if ( a2 )
        *(_DWORD *)(a2 + 4) = v9;
      v10 = *a1;
      if ( (_DWORD)v10 != HIDWORD(v10) )
      {
        if ( *(_BYTE *)v10 == 79 )
        {
          *(_DWORD *)a1 = v10 + 1;
          if ( !a2 )
            goto LABEL_50;
          v11 = 2;
          goto LABEL_49;
        }
        if ( *(_BYTE *)v10 == 82 )
        {
          *(_DWORD *)a1 = v10 + 1;
          if ( !a2 )
            goto LABEL_50;
          v11 = 1;
          goto LABEL_49;
        }
      }
      if ( !a2 )
        goto LABEL_50;
      v11 = 0;
LABEL_49:
      *(_BYTE *)(a2 + 8) = v11;
LABEL_50:
      v44 = nullptr;
      v42 = a1;
      v41 = &v44;
      v43 = &v45;
      if ( sub_924C8(a1, "St", (unsigned __int8 *)"") )
        v44 = (unsigned __int8 *)sub_940B0((int)a1, (int)"std");
      while ( 1 )
      {
        while ( 1 )
        {
          v26 = *a1;
          if ( (_DWORD)v26 != HIDWORD(v26) )
          {
            if ( *(_BYTE *)v26 == 69 )
            {
              *(_DWORD *)a1 = v26 + 1;
              result = v44;
              if ( v44 )
              {
                v36 = *(__int64 *)((char *)a1 + 148);
                if ( (_DWORD)v36 != HIDWORD(v36) )
                {
                  *((_DWORD *)a1 + 38) = HIDWORD(v36) - 4;
                  return result;
                }
              }
              return nullptr;
            }
            if ( *(_BYTE *)v26 == 76 )
            {
              LODWORD(v26) = v26 + 1;
              *(_DWORD *)a1 = v26;
            }
          }
          if ( (_DWORD)v26 == HIDWORD(v26) || *(_BYTE *)v26 != 77 )
            break;
          *(_DWORD *)a1 = v26 + 1;
          if ( !v44 )
            return nullptr;
        }
        v27 = HIDWORD(v26) - v26;
        if ( !v27 )
          goto LABEL_82;
        v28 = *(unsigned __int8 *)v26;
        if ( v28 == 67 )
          goto LABEL_86;
        if ( v28 == 68 )
          break;
        if ( v28 == 73 )
        {
          v30 = v45;
          if ( v45 )
            v30 = (_BYTE *)(&dword_0 + 1);
          v40 = sub_93D60(a1, (int)v30);
          if ( !v40 || !v44 )
            return nullptr;
          v44 = (unsigned __int8 *)sub_94038((int)a1, (int *)&v44, (int *)&v40);
          if ( v45 )
            v45[1] = 1;
LABEL_85:
          LODWORD(v34) = (char *)a1 + 148;
          HIDWORD(v34) = &v44;
          sub_938C4(v34);
        }
        else
        {
          if ( v28 != 83 )
          {
            if ( v28 == 84 )
              v29 = sub_940CC((int)a1);
            else
LABEL_82:
              v29 = sub_9447C((unsigned __int8 **)a1, v45);
LABEL_83:
            if ( !v29 )
              return nullptr;
            sub_9420C((int)&v41, (int)v29);
            goto LABEL_85;
          }
          if ( v27 >= 2 && *(_BYTE *)(v26 + 1) == 116 )
            goto LABEL_82;
          v31 = sub_93C28((int)a1);
          v40 = v31;
          if ( !v31 )
            return nullptr;
          v32 = (unsigned __int8 *)v31;
          sub_9420C((int)&v41, (int)v31);
          if ( v44 != v32 )
          {
            LODWORD(v33) = (char *)a1 + 148;
            HIDWORD(v33) = &v40;
            sub_938C4(v33);
          }
        }
      }
      if ( v27 >= 2 )
      {
        if ( (*(unsigned __int8 *)(v26 + 1) | 0x20) == 0x74 )
        {
          v29 = (_DWORD *)sub_94258(a1, 116, 68, v25);
          goto LABEL_83;
        }
        if ( *(_BYTE *)(v26 + 1) == 67 )
          goto LABEL_82;
      }
LABEL_86:
      if ( !v44 )
        return nullptr;
      v35 = sub_942D4(a1, (int *)&v44, v45);
      if ( !v35 )
        return nullptr;
      sub_9420C((int)&v41, (int)v35);
      v44 = (unsigned __int8 *)sub_943E8(a1, v44);
      if ( !v44 )
        return nullptr;
      goto LABEL_85;
    }
    goto LABEL_25;
  }
  if ( (unsigned int)v7 >= 2 && *(_BYTE *)(v6 + 1) == 116 )
  {
LABEL_25:
    if ( sub_924C8(a1, "StL", (unsigned __int8 *)"") || sub_924C8(a1, "St", (unsigned __int8 *)"") )
    {
      v19 = sub_9447C((unsigned __int8 **)a1, (_BYTE *)a2);
      if ( !v19 )
      {
        v41 = nullptr;
        return nullptr;
      }
      v20 = v19;
      result = (unsigned __int8 *)sub_93AC6((int)(a1 + 46), 12);
      *(_DWORD *)result = &off_DC5BC;
      *((_DWORD *)result + 1) = 16843042;
      *((_DWORD *)result + 2) = v20;
      v41 = (unsigned __int8 **)result;
    }
    else
    {
      result = (unsigned __int8 *)sub_9447C((unsigned __int8 **)a1, (_BYTE *)a2);
      v41 = (unsigned __int8 **)result;
      if ( !result )
        return nullptr;
    }
    v21 = *a1;
    if ( HIDWORD(v21) == (_DWORD)v21 || *(_BYTE *)v21 != 73 )
      return result;
    LODWORD(v22) = (char *)a1 + 148;
    HIDWORD(v22) = &v41;
    sub_938C4(v22);
    goto LABEL_34;
  }
  v41 = (unsigned __int8 **)sub_93C28((int)a1);
  if ( !v41 )
    return nullptr;
  v24 = *a1;
  if ( HIDWORD(v24) == (_DWORD)v24 || *(_BYTE *)v24 != 73 )
    return nullptr;
LABEL_34:
  v23 = a2;
  if ( a2 )
    v23 = 1;
  v45 = sub_93D60(a1, v23);
  if ( !v45 )
    return nullptr;
  if ( a2 )
    *(_BYTE *)(a2 + 1) = 1;
  return (unsigned __int8 *)sub_94038((int)a1, (int *)&v41, (int *)&v45);
}
// 93608: variable 'v25' is possibly undefined
// 93704: variable 'v37' is possibly undefined
// 93704: variable 'v38' is possibly undefined
// 93718: variable 'v13' is possibly undefined
// 0: using guessed type int dword_0;
// 70: using guessed type int;
// DC4B8: using guessed type _UNKNOWN *off_DC4B8;
// DC5BC: using guessed type _UNKNOWN *off_DC5BC;
