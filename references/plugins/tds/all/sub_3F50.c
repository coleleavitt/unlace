__int64 __fastcall sub_3F50(__int64 a1, __int64 a2, double a3, double a4)
{
  unsigned int v4; // ebp
  unsigned int v5; // r10d
  unsigned __int16 *v6; // rdx
  __int64 v7; // r8
  unsigned __int16 *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 v11; // rbx
  unsigned int v12; // r10d
  unsigned __int16 *v13; // r11
  unsigned int v14; // edi
  unsigned int v15; // r12d
  unsigned int v16; // r14d
  __int64 v17; // r13
  unsigned __int16 *v18; // r13
  __int64 v19; // rax
  unsigned __int16 *v20; // r15
  unsigned int v21; // ecx
  unsigned int *v22; // rdx
  unsigned int *v23; // rbx
  unsigned __int16 *v24; // r13
  __int64 v25; // r14
  char v26; // r9
  __int64 v27; // rbp
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // r12
  __int64 v32; // rbp
  int v34; // eax
  unsigned int *v35; // rdx
  unsigned __int16 *v36; // r11
  char v37; // cl
  unsigned int v38; // r10d
  __int64 v39; // rbp
  char v40; // r13
  unsigned __int16 *v41; // r14
  __int64 v42; // r15
  char v43; // bp
  __int64 v44; // rbx
  unsigned int *v45; // r12
  __int64 v46; // rsi
  __int64 v47; // rdi
  unsigned int v48; // ebp
  __int64 v49; // rax
  unsigned int v50; // [rsp+Ch] [rbp-ACh]
  unsigned int *v51; // [rsp+10h] [rbp-A8h]
  __int64 v52; // [rsp+18h] [rbp-A0h]
  unsigned int *v53; // [rsp+20h] [rbp-98h]
  __int64 v54; // [rsp+20h] [rbp-98h]
  const char *v55; // [rsp+28h] [rbp-90h]
  unsigned __int16 *v56; // [rsp+30h] [rbp-88h]
  unsigned __int16 *v57; // [rsp+30h] [rbp-88h]
  char v58; // [rsp+3Ah] [rbp-7Eh]
  unsigned __int8 v59; // [rsp+3Bh] [rbp-7Dh]
  char v60; // [rsp+3Ch] [rbp-7Ch]
  unsigned int v61; // [rsp+3Ch] [rbp-7Ch]
  unsigned int v62; // [rsp+40h] [rbp-78h]
  unsigned __int16 *v63; // [rsp+40h] [rbp-78h]
  __int64 v64; // [rsp+48h] [rbp-70h]
  unsigned __int16 *v65; // [rsp+50h] [rbp-68h]
  unsigned int *v66; // [rsp+58h] [rbp-60h]
  unsigned int v67; // [rsp+60h] [rbp-58h]
  unsigned int v68; // [rsp+64h] [rbp-54h]
  unsigned int v69; // [rsp+68h] [rbp-50h]
  int v70; // [rsp+6Ch] [rbp-4Ch]
  _QWORD v71[9]; // [rsp+70h] [rbp-48h] BYREF

  v6 = (unsigned __int16 *)(*(_QWORD *)(a1 + 120) + *(unsigned int *)(a2 + 4));
  v71[1] = __readfsqword(0x28u);
  v7 = a1;
  v8 = v6;
  v9 = *v6;
  v10 = v8[1];
  LOBYTE(v5) = (_DWORD)v10 == 0 || (_DWORD)v9 == 0;
  if ( (_BYTE)v5 )
  {
    LOBYTE(v4) = (_DWORD)v9 == (_DWORD)v10;
  }
  else
  {
    v11 = (__int64)&v8[2 * v9 + 2];
    v4 = v5;
    v58 = 1;
    v12 = *(_DWORD *)(a2 + 8);
    v52 = 0;
    v13 = (unsigned __int16 *)(v11 + 8 * v10);
    v14 = 4 * v9 + 4 + 8 * v10 + 2 * v10;
    if ( v14 < v12 )
    {
      v15 = v9;
      v16 = v8[1];
      while ( 1 )
      {
        v17 = *(unsigned int *)&v8[2 * v52 + 2];
        if ( (unsigned int)v17 < v14 )
          break;
        v18 = (unsigned __int16 *)((char *)v8 + v17);
        v19 = *v18;
        if ( !*v18 )
          break;
        v20 = &v18[2 * v19 + 3];
        v50 = (_DWORD)v20 + 8 * v19 - (_DWORD)v8;
        if ( v12 <= v50 )
          break;
        if ( v16 < (unsigned int)v19 )
          break;
        v21 = *(_DWORD *)(v18 + 1);
        if ( !v21 )
          break;
        if ( *(_DWORD *)(v7 + 160) < v21 )
          break;
        v55 = (const char *)(*(_QWORD *)(v7 + 128) + *(unsigned int *)(*(_QWORD *)(v7 + 136) + 4LL * (v21 - 1)));
        if ( *v55 == 0 || v55 == nullptr )
          break;
        v67 = v15;
        v51 = (unsigned int *)(v11 + 8 * v19);
        v22 = (unsigned int *)v11;
        v23 = (unsigned int *)(v18 + 3);
        v24 = v8;
        v68 = v16;
        v69 = v14;
        v70 = v19;
        v59 = v4;
        v64 = v7;
        do
        {
          v29 = *v23;
          if ( (unsigned int)v29 < v50 )
            return v59;
          v30 = (__int64)v24 + v29;
          v31 = v30 + 4;
          if ( (int)v30 + 4 - (int)v24 >= v12 )
            return v59;
          v32 = *(unsigned __int16 *)(v30 + 2);
          if ( !*(_WORD *)(v30 + 2) )
            return v59;
          if ( (_DWORD)v32 != 1 || *(_DWORD *)(v30 + 4) || *(_WORD *)(v30 + 8) )
          {
            v25 = v31 + 4 * v32;
            if ( v12 < (int)v25 + 2 * (int)v32 - (int)v24 )
              return v59;
            v26 = 0;
            v27 = (unsigned int)(v32 - 1);
            v28 = *(unsigned __int16 *)(v25 + 2 * v27);
          }
          else
          {
            v31 = v30 + 24;
            if ( (int)v30 + 24 - (int)v24 >= v12 )
              return v59;
            if ( *(_QWORD *)(v30 + 12) ^ 0x73656E694C676942LL | *(_QWORD *)(v30 + 4) )
              return v59;
            v48 = *(_DWORD *)(v30 + 20);
            if ( !v48 )
              return v59;
            v49 = 4LL * v48;
            v25 = v31 + v49;
            if ( v12 < (int)v31 + (int)v49 + (int)v49 - (int)v24 )
              return v59;
            v26 = 1;
            v27 = v48 - 1;
            v28 = *(_DWORD *)(v25 + 4 * v27);
          }
          if ( v28 || *v22 != *(_DWORD *)v20 || v22[1] != *((_DWORD *)v20 + 1) )
            return v59;
          if ( (_DWORD)v27 )
          {
            v62 = v12;
            v60 = v26;
            v56 = v13;
            v53 = v22;
            v34 = sub_3E40(v64, *v13, v22, v55, v71, a3, a4);
            if ( v34 != -1 )
            {
              v35 = v53;
              v36 = v56;
              v37 = 1;
              v38 = v62;
              if ( !v34 )
              {
                v58 = 0;
                v37 = 0;
              }
              v39 = (unsigned int)(v27 - 1);
              v54 = v25;
              v57 = v24;
              v40 = v37;
              v63 = v20;
              v41 = (unsigned __int16 *)(v25 + 2 * v39);
              v42 = 4 * v39;
              v43 = v60;
              v66 = v23;
              v44 = v31;
              v45 = v35;
              v61 = v38;
              v65 = v36;
              while ( 1 )
              {
                v47 = *(unsigned int *)(v44 + v42);
                if ( (unsigned int)v47 < *v45 || v45[1] < (unsigned int)v47 )
                  break;
                if ( v40 )
                {
                  if ( v43 )
                    v46 = *(unsigned int *)(v54 + v42);
                  else
                    v46 = *v41;
                  set_source_linnum(v71[0] + v47, v46);
                }
                v42 -= 4;
                --v41;
                if ( v42 == -4 )
                {
                  v24 = v57;
                  v12 = v61;
                  v22 = v45;
                  v20 = v63;
                  v13 = v65;
                  v23 = v66;
                  goto LABEL_18;
                }
              }
            }
            return v59;
          }
LABEL_18:
          v22 += 2;
          v20 += 4;
          ++v13;
          ++v23;
        }
        while ( v22 != v51 );
        v11 = (__int64)v22;
        v8 = v24;
        ++v52;
        v15 = v67;
        v16 = v68 - v70;
        v14 = v69;
        v4 = v59;
        v7 = v64;
        if ( (unsigned int)v52 >= v67 )
          return (v68 == v70) & (unsigned __int8)v58;
      }
    }
  }
  return v4;
}
