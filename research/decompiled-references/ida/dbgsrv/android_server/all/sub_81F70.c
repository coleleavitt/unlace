/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_81F70
// Address: 0x0000000000081F70

//----- (0000000000081F70) ----------------------------------------------------
__int64 __fastcall sub_81F70(__int128 *a1, char **a2)
{
  unsigned int v2; // w21
  char v5; // w25
  _QWORD *v6; // x27
  unsigned __int64 v7; // x8
  __int64 v8; // x0
  int v9; // w9
  _BYTE *v10; // x8
  unsigned __int64 v11; // x8
  unsigned int v12; // w9
  char *v13; // x22
  unsigned __int64 v14; // x29
  char *v15; // x23
  __int64 v16; // x24
  int v17; // w2
  unsigned int v18; // w0
  int v19; // w22
  __int64 i; // x8
  __int64 v21; // x8
  __int64 v22; // x0
  int v23; // w9
  const void *v24; // x1
  unsigned __int64 v25; // x8
  size_t v26; // x2
  __int64 align; // x9
  __int64 v28; // x10
  void *v29; // x0
  unsigned int v30; // w8
  char *v31; // x8
  size_t v32; // x29
  char *v33; // x1
  char *v34; // x9
  char *v35; // x25
  char *v36; // x22
  char *v37; // x8
  int v38; // w9
  char *v39; // x9
  __int64 v40; // x22
  char *v41; // x8
  int v42; // w0
  unsigned int qerrno; // w0
  void *v44; // x0
  __int64 v46; // [xsp+0h] [xbp-D0h]
  size_t v47; // [xsp+8h] [xbp-C8h]
  const void *v48; // [xsp+10h] [xbp-C0h]
  __int128 v49; // [xsp+10h] [xbp-C0h]
  pthread_mutex_t dest; // [xsp+28h] [xbp-A8h] BYREF
  char v51; // [xsp+50h] [xbp-80h]
  __int64 v52; // [xsp+58h] [xbp-78h]
  __int64 v53; // [xsp+60h] [xbp-70h]
  __int64 v54; // [xsp+68h] [xbp-68h]

  v5 = 0;
  v6 = a1 + 2;
  v54 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  dest.__list.__next = nullptr;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  memset(&dest, 0, 26);
  while ( 2 )
  {
    v10 = *((_BYTE **)a1 + 1);
LABEL_5:
    switch ( *v10++ )
    {
      case 0:
        v11 = *((_QWORD *)a1 + 8);
        if ( v11 < 2 )
          goto LABEL_59;
        v7 = v11 - 1;
        v8 = *((_QWORD *)a1 + 7) + 56 * v7;
        *(_QWORD *)a1 = *(_QWORD *)(v8 + 24);
        *((_QWORD *)a1 + 1) = *(_QWORD *)(v8 + 32);
        v9 = *(_DWORD *)(v8 + 48);
        *((_QWORD *)a1 + 8) = v7;
        *((_DWORD *)a1 + 20) = v9;
        sub_39570(v8);
        continue;
      case 9:
      case 0xA:
      case 0x20:
        *((_QWORD *)a1 + 1) = v10;
        goto LABEL_5;
      case 0x23:
        if ( *v10 != 35 )
          goto LABEL_59;
        v12 = *((unsigned __int16 *)a2 + 12);
        v13 = nullptr;
        if ( v12 > 8 )
        {
          v14 = 0;
          v15 = nullptr;
        }
        else
        {
          v14 = 0;
          v15 = nullptr;
          if ( ((1 << v12) & 0x188) != 0 )
          {
            v15 = *((char **)a1 + 4);
            v14 = *((_QWORD *)a1 + 5);
            v13 = *((char **)a1 + 6);
            *v6 = 0;
            v6[1] = 0;
            v6[2] = 0;
          }
        }
        v16 = *((_QWORD *)a1 + 2);
        v17 = *((_DWORD *)a1 + 16);
        *((_QWORD *)a1 + 1) = v10 + 1;
        v18 = sub_810F0((__int64 *)a1, (__int64)&dest, v17, nullptr);
        if ( v18 )
        {
          v19 = 1;
          v2 = v18;
          if ( !v15 )
            goto LABEL_45;
LABEL_44:
          qfree(v15);
          goto LABEL_45;
        }
        switch ( *((unsigned __int16 *)&dest.__align + 12) )
        {
          case 1u:
            v19 = 3;
            if ( !v15 )
              goto LABEL_45;
            goto LABEL_44;
          case 0x3Bu:
            if ( (*((_BYTE *)a1 + 676) & 8) == 0 )
              goto LABEL_43;
            goto LABEL_23;
          case 0x2Fu:
            if ( *((_WORD *)a2 + 12) != 47 || (*((_BYTE *)a1 + 676) & 4) == 0 )
              goto LABEL_43;
LABEL_23:
            for ( i = *((_QWORD *)a1 + 8); i; i = *((_QWORD *)a1 + 8) )
            {
              v21 = i - 1;
              v22 = *((_QWORD *)a1 + 7) + 56 * v21;
              *(_QWORD *)a1 = *(_QWORD *)(v22 + 24);
              *((_QWORD *)a1 + 1) = *(_QWORD *)(v22 + 32);
              v23 = *(_DWORD *)(v22 + 48);
              *((_QWORD *)a1 + 8) = v21;
              *((_DWORD *)a1 + 20) = v23;
              sub_39570(v22);
            }
            v19 = 1;
            v2 = 0;
            *((_WORD *)a2 + 12) = 1;
            if ( v15 )
              goto LABEL_44;
            goto LABEL_45;
        }
        v24 = *((const void **)a1 + 3);
        if ( (unsigned int)*((unsigned __int16 *)&dest.__align + 12) - 6 < 3 )
          goto LABEL_32;
        if ( *((unsigned __int16 *)&dest.__align + 12) != 2 )
        {
          if ( *((unsigned __int16 *)&dest.__align + 12) == 3 )
          {
LABEL_32:
            if ( !v24 || (v25 = *((_QWORD *)a1 + 1), v26 = v25 - (_QWORD)v24, v25 <= (unsigned __int64)v24) )
            {
LABEL_43:
              v19 = 3;
              *((_QWORD *)a1 + 1) = *((_QWORD *)a1 + 3);
              *((_QWORD *)a1 + 2) = v16;
              if ( !v15 )
                goto LABEL_45;
              goto LABEL_44;
            }
            align = dest.__align;
            v28 = v26 + 1;
            *(&dest.__align + 1) = 0;
            if ( *(&dest.__align + 2) < v26 + 1 )
            {
              v47 = v25 - (_QWORD)v24;
              v48 = v24;
              v46 = v26 + 1;
              v29 = qvector_reserve(&dest, (void *)dest.__align, v26 + 1, 1u);
              v26 = v47;
              v24 = v48;
              v28 = v46;
              align = (__int64)v29;
              dest.__align = (__int64)v29;
            }
            *(&dest.__align + 1) = v28;
            *(_BYTE *)(align + v26) = 0;
            memmove((void *)dest.__align, v24, v26);
          }
          else if ( *((unsigned __int16 *)&dest.__align + 12) <= 0x7Fu )
          {
            goto LABEL_43;
          }
        }
        v30 = *((unsigned __int16 *)a2 + 12);
        if ( v30 != 2 && v30 <= 0x7F )
        {
          if ( v14 <= 1 )
          {
            v2 = set_qerrno(0x1Du);
            v19 = 1;
            if ( !v15 )
              goto LABEL_45;
            goto LABEL_44;
          }
          v31 = *a2;
          *a2 = v15;
          a2[1] = (char *)v14;
          a2[2] = v13;
          v15 = v31;
        }
        if ( *(&dest.__align + 1) )
        {
          v32 = *(&dest.__align + 1) - 1;
          if ( *(&dest.__align + 1) != 1 )
          {
            v33 = *a2;
            v34 = a2[1];
            if ( v34 )
              v35 = v34 - 1;
            else
              v35 = nullptr;
            v36 = &v35[*(&dest.__align + 1)];
            if ( a2[2] < &v35[*(&dest.__align + 1)] )
            {
              v33 = (char *)qvector_reserve(
                              (pthread_mutex_t *)a2,
                              v33,
                              (unsigned __int64)&v35[*(&dest.__align + 1)],
                              1u);
              *a2 = v33;
            }
            a2[1] = v36;
            v35[v32 + (_QWORD)v33] = 0;
            memcpy(&v35[(_QWORD)*a2], (const void *)dest.__align, v32);
          }
        }
        v19 = 0;
        v5 = 1;
        *((_QWORD *)a1 + 2) = v16;
        if ( v15 )
          goto LABEL_44;
LABEL_45:
        if ( !v19 )
          continue;
        if ( v19 != 3 )
          goto LABEL_79;
LABEL_59:
        if ( (v5 & 1) == 0 )
          goto LABEL_78;
        v37 = a2[1];
        if ( !v37 )
        {
          LOBYTE(v38) = byte_166A39;
          if ( byte_166A39 < 0 )
            goto LABEL_65;
LABEL_64:
          if ( (unsigned int)(unsigned __int8)v38 - 48 >= 0xA )
            goto LABEL_65;
LABEL_69:
          v40 = *((_QWORD *)a1 + 2);
          v49 = *a1;
          if ( v37 )
            v41 = *a2;
          else
            v41 = &byte_F154B;
          *(_QWORD *)a1 = v41;
          *((_QWORD *)a1 + 1) = v41;
          v2 = sub_810F0((__int64 *)a1, (__int64)a2, 0, nullptr);
          *((_QWORD *)a1 + 2) = v40;
          *a1 = v49;
          if ( v2 )
            goto LABEL_79;
          goto LABEL_78;
        }
        v38 = **a2;
        if ( (v38 & 0x80000000) == 0 )
          goto LABEL_64;
LABEL_65:
        if ( v37 )
          v39 = *a2;
        else
          v39 = &byte_166A39;
        if ( *v39 == 46 )
          goto LABEL_69;
        v42 = sub_80F5C(a1, 1, (__int64)a2);
        if ( v42 == -1 )
        {
          qerrno = get_qerrno();
LABEL_83:
          v2 = qerrno;
          v44 = (void *)dest.__align;
          if ( dest.__align )
            goto LABEL_80;
          return v2;
        }
        if ( v42 != 1 )
        {
LABEL_78:
          v2 = 0;
          goto LABEL_79;
        }
        v2 = sub_810F0((__int64 *)a1, (__int64)a2, 0, nullptr);
        if ( !v2 && *((_QWORD *)a1 + 8) )
        {
          qerrno = sub_81F70(a1, a2);
          goto LABEL_83;
        }
LABEL_79:
        v44 = (void *)dest.__align;
        if ( dest.__align )
        {
LABEL_80:
          *(&dest.__align + 1) = 0;
          qfree(v44);
          dest.__align = 0;
          *(&dest.__align + 2) = 0;
        }
        return v2;
      default:
        goto LABEL_59;
    }
  }
}
// 82410: variable 'v2' is possibly undefined
// F154B: using guessed type char byte_F154B;
// 166A39: using guessed type char byte_166A39;
