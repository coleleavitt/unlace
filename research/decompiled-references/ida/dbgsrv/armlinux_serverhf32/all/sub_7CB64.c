/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7CB64
// Address: 0x0007CB64

//----- (0007CB64) --------------------------------------------------------
void __fastcall sub_7CB64(int a1, int *a2, int a3, int a4)
{
  int v6; // r0
  int v7; // r3
  void **v8; // r10
  char v9; // r0
  unsigned __int8 *v10; // r3
  int v11; // r1
  unsigned int v12; // r1
  char *v13; // r4
  unsigned int v14; // r0
  unsigned int v15; // r3
  unsigned int v16; // r6
  bool v17; // cf
  bool v18; // cc
  unsigned int v19; // r7
  int v20; // r7
  int v21; // r1
  int v22; // r2
  char *v23; // r4
  char *v24; // r7
  int v25; // r6
  unsigned int v26; // r1
  unsigned __int8 *v27; // r3
  char v28; // r2
  int v29; // r6
  unsigned int *v30; // r5
  char *v31; // r0
  unsigned int v32; // r11
  void *v33; // r0
  unsigned int v34; // r7
  char *v35; // r3
  char *v36; // r12
  int v37; // r0
  int v38; // r1
  int v39; // r2
  char *v40; // r3
  char *v41; // r4
  char *v42; // r6
  int v43; // r0
  int v44; // r1
  int v45; // r2
  char *v46; // r5
  int v47; // lr
  int v48; // r11
  char v49; // r7
  int v50; // r7
  int v51; // r1
  int v52; // r2
  char *v53; // r4
  char *v54; // r0
  unsigned int v55; // r11
  void *v56; // r0
  unsigned int v57; // r7
  char *v58; // r3
  char *v59; // r12
  int v60; // r0
  int v61; // r1
  int v62; // r2
  unsigned __int8 *v63; // [sp+8h] [bp-3Ch] BYREF
  unsigned int v64; // [sp+Ch] [bp-38h]
  int v65; // [sp+10h] [bp-34h] BYREF
  int v66; // [sp+14h] [bp-30h]
  int v67; // [sp+18h] [bp-2Ch]
  int v68; // [sp+1Ch] [bp-28h]
  int v69; // [sp+20h] [bp-24h]
  int v70; // [sp+24h] [bp-20h]
  void *ptr; // [sp+28h] [bp-1Ch] BYREF
  unsigned int v72; // [sp+2Ch] [bp-18h]
  unsigned int v73; // [sp+30h] [bp-14h]
  int v74; // [sp+34h] [bp-10h]
  char v75; // [sp+38h] [bp-Ch]

  if ( a4 )
  {
    v6 = nullsub_36(a4);
    v7 = *a2;
    v8 = (void **)v6;
    v9 = 0;
    ptr = nullptr;
    v72 = 0;
    v73 = 0;
    v74 = v7;
    if ( v7 != -1 )
      v9 = sub_6AD68();
    v10 = (unsigned __int8 *)a2[2];
    v11 = a2[1];
    v75 = v9;
    v63 = v10;
    v12 = (unsigned int)&v10[v11];
    v72 = 0;
    v64 = v12;
    if ( (unsigned int)v10 >= v12 )
      goto LABEL_5;
    v14 = sub_7617C(&v63, v12);
    v13 = (char *)ptr;
    v15 = v72;
    v16 = v14;
    v17 = v14 >= v72;
    v18 = v14 > v72;
    if ( v14 != v72 )
    {
      if ( v14 < v72 )
        v72 = v14;
      v65 = 0;
      v66 = 0;
      if ( !v17 )
        v15 = v14;
      LOBYTE(v67) = 0;
      if ( v17 && v18 )
      {
        v19 = v73;
        if ( ptr <= &v65 && &v65 < (int *)((char *)ptr + 12 * v73) )
        {
          v68 = v65;
          v69 = v66;
          v70 = v67;
          if ( v14 <= v73 )
            goto LABEL_51;
          v54 = (char *)sub_77EB0((int)&ptr, nullptr, v14, 0xCu);
          v55 = v73;
          v13 = v54;
          v73 = v19;
          v56 = ptr;
          v57 = v72 - 1;
          if ( (int)(v72 - 1) >= 0 )
          {
            v58 = (char *)ptr + 12;
            v59 = v13 + 12;
            do
            {
              v60 = *((_DWORD *)v58 - 3);
              v61 = *((_DWORD *)v58 - 2);
              v62 = *((_DWORD *)v58 - 1);
              --v57;
              v58 += 12;
              *((_DWORD *)v59 - 3) = v60;
              *((_DWORD *)v59 - 2) = v61;
              *((_DWORD *)v59 - 1) = v62;
              v59 += 12;
            }
            while ( v57 != -1 );
            v56 = ptr;
          }
          sub_77E08(v56);
          v15 = v72;
          ptr = v13;
          v73 = v55;
          if ( v16 > v72 )
          {
LABEL_51:
            v50 = 12 * v15;
            while ( 1 )
            {
              v51 = v69;
              v52 = v70;
              ++v15;
              v53 = &v13[v50];
              v50 += 12;
              *(_DWORD *)v53 = v68;
              *((_DWORD *)v53 + 1) = v51;
              *((_DWORD *)v53 + 2) = v52;
              if ( v16 <= v15 )
                break;
              v13 = (char *)ptr;
            }
          }
          v72 = v16;
          v15 = v16;
          v13 = (char *)ptr;
        }
        else
        {
          if ( v14 <= v73 )
            goto LABEL_21;
          v31 = (char *)sub_77EB0((int)&ptr, nullptr, v14, 0xCu);
          v32 = v73;
          v13 = v31;
          v73 = v19;
          v33 = ptr;
          v34 = v72 - 1;
          if ( (int)(v72 - 1) >= 0 )
          {
            v35 = (char *)ptr + 12;
            v36 = v13 + 12;
            do
            {
              v37 = *((_DWORD *)v35 - 3);
              v38 = *((_DWORD *)v35 - 2);
              v39 = *((_DWORD *)v35 - 1);
              --v34;
              v35 += 12;
              *((_DWORD *)v36 - 3) = v37;
              *((_DWORD *)v36 - 2) = v38;
              *((_DWORD *)v36 - 1) = v39;
              v36 += 12;
            }
            while ( v34 != -1 );
            v33 = ptr;
          }
          sub_77E08(v33);
          v15 = v72;
          ptr = v13;
          v73 = v32;
          if ( v16 > v72 )
          {
LABEL_21:
            v20 = 12 * v15;
            do
            {
              v21 = v66;
              v22 = v67;
              ++v15;
              v23 = &v13[v20];
              v20 += 12;
              *(_DWORD *)v23 = v65;
              *((_DWORD *)v23 + 1) = v21;
              *((_DWORD *)v23 + 2) = v22;
              v13 = (char *)ptr;
            }
            while ( v16 > v15 );
          }
          v15 = v16;
          v72 = v16;
        }
      }
    }
    v24 = &v13[12 * v15];
    if ( v24 == v13 )
      goto LABEL_6;
    v25 = 0;
    do
    {
      v27 = v63;
      v26 = v64;
      if ( v64 <= (unsigned int)v63 )
        v28 = 0;
      else
        v28 = *v63;
      if ( v64 > (unsigned int)v63 )
        v27 = v63 + 1;
      v63 = v27;
      v13[8] = v28;
      v29 = v25 + sub_7617C(&v63, v26);
      *(_DWORD *)v13 = v29;
      v25 = v29 + sub_7617C(&v63, v64);
      v13 += 12;
      *((_DWORD *)v13 - 2) = v25;
    }
    while ( v24 != v13 );
    v30 = (unsigned int *)ptr;
    v13 = (char *)ptr + 12 * v72;
    if ( !a3 )
    {
      if ( ptr == v13 )
        goto LABEL_6;
      if ( ptr >= v13 - 12 )
      {
        do
        {
LABEL_37:
          if ( *((unsigned __int8 *)v30 + 8) == a3 )
            sub_7C1B4(v8, v30);
          else
            sub_7C01C((int)v8, v30);
          v30 += 3;
        }
        while ( v30 != (unsigned int *)v13 );
LABEL_5:
        v13 = (char *)ptr;
        goto LABEL_6;
      }
      v40 = (char *)ptr + 12;
      v41 = v13 - 24;
      do
      {
        v42 = v40 - 12;
        v43 = *((_DWORD *)v40 - 3);
        v44 = *((_DWORD *)v40 - 2);
        v45 = *((_DWORD *)v40 - 1);
        v18 = v41 > v40;
        v40 += 12;
        v46 = v41 + 12;
        v47 = *((_DWORD *)v41 + 3);
        v41 -= 12;
        v68 = v43;
        v69 = v44;
        v70 = v45;
        v48 = *((_DWORD *)v46 + 1);
        *((_DWORD *)v40 - 6) = v47;
        *((_DWORD *)v42 + 1) = v48;
        v49 = v70;
        v42[8] = v46[8];
        *((_DWORD *)v41 + 6) = v43;
        *((_DWORD *)v46 + 1) = v44;
        v46[8] = v49;
      }
      while ( v18 );
      v30 = (unsigned int *)ptr;
      v13 = (char *)ptr + 12 * v72;
    }
    if ( v30 == (unsigned int *)v13 )
    {
LABEL_6:
      if ( v13 )
      {
        v72 = 0;
        sub_77E08(v13);
      }
      return;
    }
    goto LABEL_37;
  }
}
// 6AD70: using guessed type int __fastcall nullsub_36(_DWORD);
