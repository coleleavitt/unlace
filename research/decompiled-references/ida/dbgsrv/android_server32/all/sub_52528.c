/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_52528
// Address: 0x00052528

//----- (00052528) --------------------------------------------------------
int __fastcall sub_52528(char **a1, int a2)
{
  int v2; // r6
  int v4; // r5
  unsigned int v5; // r1
  int v6; // r0
  char *v7; // r2
  unsigned int v8; // r0
  char *v9; // r0
  char *v10; // r7
  unsigned int v11; // r1
  unsigned int v12; // r6
  char *v13; // r2
  int v14; // r0
  int v15; // r7
  char *v16; // r2
  char *v17; // r1
  int v18; // r0
  char *v19; // r2
  char *v20; // r0
  unsigned int v21; // r0
  size_t v22; // r2
  unsigned int v23; // r3
  void *v24; // r1
  unsigned int v25; // r0
  char *v26; // r0
  size_t v27; // r6
  int v28; // r1
  int v29; // r5
  size_t v30; // r7
  _DWORD *v31; // r0
  void *v32; // r1
  unsigned int v33; // r2
  unsigned int v34; // r7
  int v35; // r0
  char *v36; // r1
  int v37; // r2
  int v38; // r1
  char *v39; // r1
  char *v40; // r5
  char *v41; // r6
  char *v42; // r7
  int v43; // r1
  char *v44; // r0
  int v45; // r0
  int v46; // r5
  int qerrno; // r0
  int v48; // r0
  int v50; // [sp+8h] [bp-58h]
  size_t v51; // [sp+Ch] [bp-54h]
  char *v52; // [sp+10h] [bp-50h]
  int v53; // [sp+18h] [bp-48h]
  char *v54; // [sp+20h] [bp-40h]
  _BYTE *v55; // [sp+24h] [bp-3Ch]
  char *v56; // [sp+28h] [bp-38h]
  char *v57; // [sp+28h] [bp-38h]
  void *ptr; // [sp+34h] [bp-2Ch] BYREF
  unsigned int v60; // [sp+38h] [bp-28h]
  unsigned int v61; // [sp+3Ch] [bp-24h]
  unsigned __int16 v62; // [sp+40h] [bp-20h]
  int v63; // [sp+44h] [bp-1Ch]
  char v64; // [sp+48h] [bp-18h]
  int v65; // [sp+4Ch] [bp-14h]
  int v66; // [sp+50h] [bp-10h]
  int v67; // [sp+54h] [bp-Ch]
  int v68; // [sp+58h] [bp-8h]

  v2 = a2;
  v4 = 0;
  v64 = 0;
  v62 = 0;
  v63 = 0;
  v68 = 0;
  v67 = 0;
  v66 = 0;
  v65 = 0;
  v61 = 0;
  v60 = 0;
  ptr = nullptr;
  v55 = a1 + 123;
  while ( 2 )
  {
    v9 = a1[1];
LABEL_6:
    ++v9;
    v10 = nullptr;
    switch ( *(v9 - 1) )
    {
      case 0:
        v8 = (unsigned int)a1[8];
        if ( v8 < 2 )
          goto LABEL_57;
        v5 = v8 - 1;
        v6 = (int)&a1[7][28 * v8 - 28];
        *a1 = *(char **)(v6 + 12);
        a1[1] = *(char **)(v6 + 16);
        v7 = *(char **)(v6 + 24);
        a1[8] = (char *)v5;
        a1[10] = v7;
        sub_1B3BC((char **)v6);
        continue;
      case 9:
      case 10:
      case 32:
        a1[1] = v9;
        goto LABEL_6;
      case 35:
        if ( *v9 != 35 )
          goto LABEL_57;
        v11 = *(unsigned __int16 *)(v2 + 12);
        if ( v11 > 8 )
        {
          v12 = 0;
          v13 = nullptr;
        }
        else
        {
          v12 = 0;
          v13 = nullptr;
          if ( ((1 << v11) & 0x188) != 0 )
          {
            v13 = a1[4];
            a1[4] = nullptr;
            v12 = (unsigned int)a1[5];
            a1[5] = nullptr;
            v10 = a1[6];
            a1[6] = nullptr;
          }
        }
        v56 = v13;
        a1[1] = v9 + 1;
        v54 = a1[2];
        v14 = sub_51A0C((int)a1, (int)&ptr, (int)a1[8], nullptr);
        if ( v14 )
        {
          v15 = 1;
          v53 = v14;
LABEL_14:
          v2 = a2;
          goto LABEL_15;
        }
        v16 = v56;
        switch ( v62 )
        {
          case 1u:
            goto LABEL_43;
          case 0x3Bu:
            if ( (*v55 & 8) == 0 )
              goto LABEL_42;
            goto LABEL_27;
          case 0x2Fu:
            if ( *(_WORD *)(a2 + 12) != 47 || (*v55 & 4) == 0 )
            {
LABEL_42:
              a1[1] = a1[3];
              a1[2] = v54;
LABEL_43:
              v2 = a2;
              v15 = 3;
              if ( !v56 )
                goto LABEL_45;
LABEL_44:
              qfree(v16);
              goto LABEL_45;
            }
LABEL_27:
            while ( 1 )
            {
              v20 = a1[8];
              if ( !v20 )
                break;
              v17 = v20 - 1;
              v18 = (int)&a1[7][28 * (_DWORD)(v20 - 1)];
              *a1 = *(char **)(v18 + 12);
              a1[1] = *(char **)(v18 + 16);
              v19 = *(char **)(v18 + 24);
              a1[8] = v17;
              a1[10] = v19;
              sub_1B3BC((char **)v18);
            }
            v15 = 1;
            v2 = a2;
            *(_WORD *)(a2 + 12) = 1;
            v53 = 0;
LABEL_15:
            v16 = v56;
            if ( !v56 )
              goto LABEL_45;
            goto LABEL_44;
        }
        v52 = a1[3];
        if ( (unsigned int)v62 - 6 < 3 )
          goto LABEL_32;
        if ( v62 != 2 )
        {
          if ( v62 == 3 )
          {
LABEL_32:
            if ( !v52 )
              goto LABEL_42;
            v21 = (unsigned int)a1[1];
            if ( v21 <= (unsigned int)v52 )
              goto LABEL_42;
            v60 = 0;
            v22 = v21 - (_DWORD)v52;
            v23 = v21 - (_DWORD)v52 + 1;
            v24 = ptr;
            if ( v61 < v23 )
            {
              v51 = v21 - (_DWORD)v52;
              v50 = v21 - (_DWORD)v52 + 1;
              v24 = qvector_reserve((int)&ptr, ptr, v23, 1u);
              ptr = v24;
              v22 = v51;
              v23 = v50;
            }
            v60 = v23;
            *((_BYTE *)v24 + v22) = 0;
            memmove(ptr, v52, v22);
            v16 = v56;
          }
          else if ( v62 <= 0x7Fu )
          {
            goto LABEL_42;
          }
        }
        v25 = *(unsigned __int16 *)(a2 + 12);
        if ( v25 != 2 && v25 <= 0x7F )
        {
          if ( v12 <= 1 )
          {
            v53 = set_qerrno(29);
            v15 = 1;
            goto LABEL_14;
          }
          *(_DWORD *)(a2 + 4) = v12;
          *(_DWORD *)(a2 + 8) = v10;
          v26 = *(char **)a2;
          *(_DWORD *)a2 = v16;
          v16 = v26;
        }
        v27 = v60 - 1;
        if ( v60 >= 2 )
        {
          v57 = v16;
          v28 = *(_DWORD *)(a2 + 4);
          v29 = v28 - 1;
          if ( !v28 )
            v29 = 0;
          v30 = v29 + v27;
          v31 = (_DWORD *)a2;
          v32 = *(void **)a2;
          v33 = v29 + v60;
          if ( *(_DWORD *)(a2 + 8) < v29 + v60 )
          {
            v34 = v29 + v60;
            v32 = qvector_reserve(a2, v32, v33, 1u);
            v31 = (_DWORD *)a2;
            *(_DWORD *)a2 = v32;
            v33 = v34;
            v30 = v29 + v27;
          }
          v31[1] = v33;
          *((_BYTE *)v32 + v30) = 0;
          qmemcpy((void *)(*v31 + v29), ptr, v27);
          v16 = v57;
        }
        a1[2] = v54;
        v4 = 1;
        v15 = 0;
        v2 = a2;
        if ( v16 )
          goto LABEL_44;
LABEL_45:
        if ( !v15 )
          continue;
        if ( v15 != 3 )
        {
          v46 = v53;
          goto LABEL_77;
        }
LABEL_57:
        if ( !(v4 << 31) )
          goto LABEL_76;
        v35 = *(_DWORD *)(v2 + 4);
        if ( v35 )
          v36 = *(char **)v2;
        else
          v36 = byte_DE331;
        v37 = *v36;
        v38 = (unsigned __int8)*v36;
        if ( v37 >= 0 && (unsigned int)(v38 - 48) < 0xA
          || (!v35 ? (v39 = byte_DE331) : (v39 = *(char **)v2), *v39 == 46) )
        {
          v40 = *a1;
          v41 = a1[1];
          v42 = a1[2];
          if ( v35 )
          {
            v43 = a2;
            v44 = *(char **)a2;
          }
          else
          {
            v44 = &byte_B3CBE;
            v43 = a2;
          }
          *a1 = v44;
          a1[1] = v44;
          v48 = sub_51A0C((int)a1, v43, 0, nullptr);
          *a1 = v40;
          a1[1] = v41;
          a1[2] = v42;
          v46 = v48;
          if ( !v48 )
LABEL_76:
            v46 = 0;
          goto LABEL_77;
        }
        v45 = sub_518F0((int)a1, 1, v2);
        if ( v45 == -1 )
        {
          qerrno = get_qerrno();
          goto LABEL_81;
        }
        if ( v45 != 1 )
          goto LABEL_76;
        v46 = sub_51A0C((int)a1, v2, 0, nullptr);
        if ( !v46 && a1[8] )
        {
          qerrno = sub_52528(a1, v2);
LABEL_81:
          v46 = qerrno;
        }
LABEL_77:
        if ( ptr )
        {
          v60 = 0;
          qfree(ptr);
          v61 = 0;
          ptr = nullptr;
        }
        return v46;
      default:
        goto LABEL_57;
    }
  }
}
// 52888: variable 'v53' is possibly undefined
// B3CBE: using guessed type char byte_B3CBE;
