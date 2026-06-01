__int64 __fastcall sub_47C8D0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rax
  _QWORD *v5; // r13
  __int64 v6; // rax
  _QWORD *v7; // r14
  _QWORD *v8; // r15
  void *v9; // rdi
  _QWORD *v10; // r14
  __int64 *v11; // r13
  unsigned __int64 v12; // r15
  __int64 v13; // rsi
  bool v14; // zf
  _QWORD *v15; // r13
  __int64 v16; // rax
  _QWORD *v17; // r14
  _QWORD *v18; // r15
  void *v19; // rdi
  _QWORD *v20; // r14
  unsigned __int64 v21; // r13
  __int64 *v22; // r15
  __int64 v23; // rsi
  _DWORD **v24; // rbp
  _DWORD *v25; // rax
  __int64 v26; // rax
  unsigned int v27; // eax
  _QWORD *v28; // r13
  __int64 v29; // rax
  _QWORD *v30; // r15
  _QWORD *v31; // r14
  void *v32; // rdi
  _QWORD *v33; // r14
  unsigned __int64 v34; // r13
  __int64 *v35; // r15
  __int64 v36; // rsi
  _QWORD *v37; // r13
  __int64 v38; // rax
  _QWORD *v39; // r14
  _QWORD *v40; // r15
  void *v41; // rdi
  _QWORD *v42; // r13
  unsigned __int64 v43; // r14
  __int64 *v44; // r15
  __int64 v45; // rsi
  void (__fastcall ***v47)(void *); // r13
  _QWORD *v48; // r13
  __int64 *v49; // r13
  __int64 *v50; // r14
  __int64 v51; // rsi
  __int64 v52; // rdi
  __int64 *v53; // r13
  __int64 *v54; // r14
  __int64 v55; // rsi
  __int64 v56; // rdi
  __int64 *v57; // r13
  __int64 *v58; // r14
  __int64 v59; // rsi
  __int64 v60; // rdi
  __int64 v61; // rsi
  __int64 v62; // rdi
  void (__fastcall ***v63)(void *); // r13
  _QWORD *v64; // r13
  __int64 *v65; // r13
  __int64 *v66; // r15
  __int64 v67; // rsi
  __int64 v68; // rdi
  __int64 *v69; // r13
  __int64 *v70; // r15
  __int64 v71; // rsi
  __int64 v72; // rdi
  __int64 *v73; // r13
  __int64 *v74; // r15
  __int64 v75; // rsi
  __int64 v76; // rdi
  __int64 v77; // rsi
  __int64 v78; // rdi
  __int64 v79; // [rsp+0h] [rbp-E8h]
  __int64 v80; // [rsp+0h] [rbp-E8h]
  __int64 v81; // [rsp+0h] [rbp-E8h]
  __int64 v82; // [rsp+0h] [rbp-E8h]
  __int64 v83; // [rsp+10h] [rbp-D8h]
  _DWORD **i; // [rsp+10h] [rbp-D8h]
  _DWORD *ptr; // [rsp+20h] [rbp-C8h]
  _QWORD *ptra; // [rsp+20h] [rbp-C8h]
  char v88[8]; // [rsp+28h] [rbp-C0h] BYREF
  __int64 v89; // [rsp+30h] [rbp-B8h]
  __int64 v90; // [rsp+48h] [rbp-A0h]
  __int64 v91; // [rsp+50h] [rbp-98h]
  _QWORD *v92; // [rsp+58h] [rbp-90h]
  __int64 v93; // [rsp+60h] [rbp-88h]
  __int64 v94; // [rsp+68h] [rbp-80h]
  _QWORD *v95; // [rsp+70h] [rbp-78h]
  __int64 v96; // [rsp+80h] [rbp-68h]
  _QWORD *v97; // [rsp+88h] [rbp-60h]
  _QWORD *v98; // [rsp+90h] [rbp-58h]

  v1 = *(_QWORD *)(a1 + 80);
  if ( v1 )
  {
    v2 = *(unsigned int *)(v1 - 4);
    if ( (_DWORD)v2 )
    {
      v3 = 17 * v2;
      LODWORD(v2) = *(_DWORD *)(*(_QWORD *)v1 + 96LL);
      v83 = v1 + 8 * v3;
      do
      {
        v4 = *(_DWORD **)v1;
        if ( *(_QWORD *)v1 )
          ++*v4;
        ptr = v4;
        sub_482680(v88, v1 + 8);
        v5 = v98;
        if ( (unsigned int)v2 > ptr[24] )
          LODWORD(v2) = ptr[24];
        if ( v98 )
        {
          v6 = *((unsigned int *)v98 - 1);
          v7 = v98;
          v8 = &v98[v6];
          if ( (_DWORD)v6 )
          {
            do
            {
              while ( *v7 )
              {
                v9 = (void *)(*v7++ - 8LL);
                sub_186B220(v9);
                if ( v7 == v8 )
                  goto LABEL_12;
              }
              ++v7;
            }
            while ( v7 != v8 );
          }
LABEL_12:
          sub_186B220(v5 - 1);
        }
        v10 = v97;
        if ( v97 )
        {
          v11 = v97;
          v12 = (unsigned __int64)&v97[*((unsigned int *)v97 - 1)];
          v79 = v96;
          if ( (unsigned __int64)v97 < v12 )
          {
            do
            {
              while ( 1 )
              {
                v13 = *v11;
                if ( *v11 )
                {
                  v14 = (*(_DWORD *)(v13 + 8))-- == 1;
                  if ( v14 )
                    break;
                }
                if ( (unsigned __int64)++v11 >= v12 )
                  goto LABEL_20;
              }
              ++v11;
              sub_15D7BC0(v79, v13);
            }
            while ( (unsigned __int64)v11 < v12 );
          }
LABEL_20:
          sub_186B220(v10 - 1);
        }
        v15 = v95;
        if ( v95 )
        {
          v16 = *((unsigned int *)v95 - 1);
          v17 = v95;
          v18 = &v95[v16];
          if ( (_DWORD)v16 )
          {
            do
            {
              while ( *v17 )
              {
                v19 = (void *)(*v17++ - 8LL);
                sub_186B220(v19);
                if ( v17 == v18 )
                  goto LABEL_25;
              }
              ++v17;
            }
            while ( v17 != v18 );
          }
LABEL_25:
          sub_186B220(v15 - 1);
        }
        if ( v94 )
          sub_186B220((void *)(v94 - 8));
        if ( v93 )
          sub_186B220((void *)(v93 - 8));
        v20 = v92;
        if ( v92 )
        {
          v21 = (unsigned __int64)&v92[*((unsigned int *)v92 - 1)];
          if ( (unsigned __int64)v92 < v21 )
          {
            v22 = v92;
            v80 = v91;
            do
            {
              while ( 1 )
              {
                v23 = *v22;
                if ( *v22 )
                {
                  v14 = (*(_DWORD *)(v23 + 8))-- == 1;
                  if ( v14 )
                    break;
                }
                if ( (unsigned __int64)++v22 >= v21 )
                  goto LABEL_37;
              }
              ++v22;
              sub_15D7BC0(v80, v23);
            }
            while ( (unsigned __int64)v22 < v21 );
          }
LABEL_37:
          sub_186B220(v20 - 1);
        }
        if ( v90 )
          sub_186B220((void *)(v90 - 8));
        if ( v89 )
          sub_186B220((void *)(v89 - 8));
        v14 = (*ptr)-- == 1;
        if ( v14 )
        {
          v47 = *((void (__fastcall ****)(void *))ptr + 11);
          if ( v47 )
          {
            v14 = (*((_DWORD *)v47 + 4))-- == 1;
            if ( v14 )
            {
              (**v47)(v47);
              sub_186B220(v47);
            }
          }
          v48 = *((_QWORD **)ptr + 10);
          if ( v48 )
          {
            v14 = (*(_DWORD *)v48)-- == 1;
            if ( v14 )
            {
              sub_41CB00(v48);
              sub_186B220(v48);
            }
          }
          v49 = *((__int64 **)ptr + 9);
          if ( v49 )
          {
            v50 = &v49[*((unsigned int *)v49 - 1)];
            if ( v49 >= v50 )
              goto LABEL_107;
            do
            {
              while ( 1 )
              {
                v51 = *v49;
                if ( *v49 )
                {
                  v52 = *((_QWORD *)ptr + 8);
                  v14 = (*(_DWORD *)(v51 + 8))-- == 1;
                  if ( v14 )
                    break;
                }
                if ( ++v49 >= v50 )
                  goto LABEL_106;
              }
              sub_15D7BC0(v52, v51);
              ++v49;
            }
            while ( v49 < v50 );
LABEL_106:
            v49 = *((__int64 **)ptr + 9);
            if ( v49 )
LABEL_107:
              sub_186B220(v49 - 1);
          }
          v53 = *((__int64 **)ptr + 7);
          if ( v53 )
          {
            v54 = &v53[*((unsigned int *)v53 - 1)];
            if ( v53 >= v54 )
              goto LABEL_116;
            do
            {
              while ( 1 )
              {
                v55 = *v53;
                if ( *v53 )
                {
                  v56 = *((_QWORD *)ptr + 6);
                  v14 = (*(_DWORD *)(v55 + 8))-- == 1;
                  if ( v14 )
                    break;
                }
                if ( ++v53 >= v54 )
                  goto LABEL_115;
              }
              sub_15D7BC0(v56, v55);
              ++v53;
            }
            while ( v53 < v54 );
LABEL_115:
            v53 = *((__int64 **)ptr + 7);
            if ( v53 )
LABEL_116:
              sub_186B220(v53 - 1);
          }
          v57 = *((__int64 **)ptr + 5);
          if ( v57 )
          {
            v58 = &v57[*((unsigned int *)v57 - 1)];
            if ( v57 >= v58 )
              goto LABEL_125;
            do
            {
              while ( 1 )
              {
                v59 = *v57;
                if ( *v57 )
                {
                  v60 = *((_QWORD *)ptr + 4);
                  v14 = (*(_DWORD *)(v59 + 8))-- == 1;
                  if ( v14 )
                    break;
                }
                if ( ++v57 >= v58 )
                  goto LABEL_124;
              }
              sub_15D7BC0(v60, v59);
              ++v57;
            }
            while ( v57 < v58 );
LABEL_124:
            v57 = *((__int64 **)ptr + 5);
            if ( v57 )
LABEL_125:
              sub_186B220(v57 - 1);
          }
          v61 = *((_QWORD *)ptr + 2);
          if ( v61 )
          {
            v62 = *((_QWORD *)ptr + 3);
            v14 = (*(_DWORD *)(v61 + 8))-- == 1;
            if ( v14 )
              sub_15D7BC0(v62, v61);
          }
          sub_186B220(ptr);
        }
        v1 += 136;
      }
      while ( v83 != v1 );
      if ( (unsigned int)v2 > 0xFFFE )
      {
        v24 = *(_DWORD ***)(a1 + 80);
        if ( v24 )
        {
          for ( i = &v24[17 * *((unsigned int *)v24 - 1)]; i != v24; v24 += 17 )
          {
            v25 = *v24;
            if ( *v24 )
              ++*v25;
            ptra = v25;
            sub_482680(v88, v24 + 1);
            v26 = ptra[10];
            if ( v26 )
            {
              v27 = *(unsigned __int16 *)(v26 + 72);
              if ( (unsigned int)v2 > v27 )
                LODWORD(v2) = v27;
            }
            v28 = v98;
            if ( v98 )
            {
              v29 = *((unsigned int *)v98 - 1);
              v30 = v98;
              v31 = &v98[v29];
              if ( (_DWORD)v29 )
              {
                do
                {
                  while ( *v30 )
                  {
                    v32 = (void *)(*v30++ - 8LL);
                    sub_186B220(v32);
                    if ( v30 == v31 )
                      goto LABEL_56;
                  }
                  ++v30;
                }
                while ( v30 != v31 );
              }
LABEL_56:
              sub_186B220(v28 - 1);
            }
            v33 = v97;
            if ( v97 )
            {
              v34 = (unsigned __int64)&v97[*((unsigned int *)v97 - 1)];
              if ( (unsigned __int64)v97 < v34 )
              {
                v35 = v97;
                v81 = v96;
                do
                {
                  while ( 1 )
                  {
                    v36 = *v35;
                    if ( *v35 )
                    {
                      v14 = (*(_DWORD *)(v36 + 8))-- == 1;
                      if ( v14 )
                        break;
                    }
                    if ( (unsigned __int64)++v35 >= v34 )
                      goto LABEL_64;
                  }
                  ++v35;
                  sub_15D7BC0(v81, v36);
                }
                while ( (unsigned __int64)v35 < v34 );
              }
LABEL_64:
              sub_186B220(v33 - 1);
            }
            v37 = v95;
            if ( v95 )
            {
              v38 = *((unsigned int *)v95 - 1);
              v39 = v95;
              v40 = &v95[v38];
              if ( (_DWORD)v38 )
              {
                do
                {
                  while ( *v39 )
                  {
                    v41 = (void *)(*v39++ - 8LL);
                    sub_186B220(v41);
                    if ( v40 == v39 )
                      goto LABEL_69;
                  }
                  ++v39;
                }
                while ( v39 != v40 );
              }
LABEL_69:
              sub_186B220(v37 - 1);
            }
            if ( v94 )
              sub_186B220((void *)(v94 - 8));
            if ( v93 )
              sub_186B220((void *)(v93 - 8));
            v42 = v92;
            if ( v92 )
            {
              v43 = (unsigned __int64)&v92[*((unsigned int *)v92 - 1)];
              if ( (unsigned __int64)v92 < v43 )
              {
                v44 = v92;
                v82 = v91;
                do
                {
                  while ( 1 )
                  {
                    v45 = *v44;
                    if ( *v44 )
                    {
                      v14 = (*(_DWORD *)(v45 + 8))-- == 1;
                      if ( v14 )
                        break;
                    }
                    if ( (unsigned __int64)++v44 >= v43 )
                      goto LABEL_81;
                  }
                  ++v44;
                  sub_15D7BC0(v82, v45);
                }
                while ( (unsigned __int64)v44 < v43 );
              }
LABEL_81:
              sub_186B220(v42 - 1);
            }
            if ( v90 )
              sub_186B220((void *)(v90 - 8));
            if ( v89 )
              sub_186B220((void *)(v89 - 8));
            v14 = (*(_DWORD *)ptra)-- == 1;
            if ( v14 )
            {
              v63 = (void (__fastcall ***)(void *))ptra[11];
              if ( v63 )
              {
                v14 = (*((_DWORD *)v63 + 4))-- == 1;
                if ( v14 )
                {
                  (**v63)(v63);
                  sub_186B220(v63);
                }
              }
              v64 = (_QWORD *)ptra[10];
              if ( v64 )
              {
                v14 = (*(_DWORD *)v64)-- == 1;
                if ( v14 )
                {
                  sub_41CB00(v64);
                  sub_186B220(v64);
                }
              }
              v65 = (__int64 *)ptra[9];
              if ( v65 )
              {
                v66 = &v65[*((unsigned int *)v65 - 1)];
                if ( v65 >= v66 )
                  goto LABEL_149;
                do
                {
                  while ( 1 )
                  {
                    v67 = *v65;
                    if ( *v65 )
                    {
                      v68 = ptra[8];
                      v14 = (*(_DWORD *)(v67 + 8))-- == 1;
                      if ( v14 )
                        break;
                    }
                    if ( ++v65 >= v66 )
                      goto LABEL_148;
                  }
                  sub_15D7BC0(v68, v67);
                  ++v65;
                }
                while ( v65 < v66 );
LABEL_148:
                v65 = (__int64 *)ptra[9];
                if ( v65 )
LABEL_149:
                  sub_186B220(v65 - 1);
              }
              v69 = (__int64 *)ptra[7];
              if ( v69 )
              {
                v70 = &v69[*((unsigned int *)v69 - 1)];
                if ( v69 >= v70 )
                  goto LABEL_158;
                do
                {
                  while ( 1 )
                  {
                    v71 = *v69;
                    if ( *v69 )
                    {
                      v72 = ptra[6];
                      v14 = (*(_DWORD *)(v71 + 8))-- == 1;
                      if ( v14 )
                        break;
                    }
                    if ( ++v69 >= v70 )
                      goto LABEL_157;
                  }
                  sub_15D7BC0(v72, v71);
                  ++v69;
                }
                while ( v69 < v70 );
LABEL_157:
                v69 = (__int64 *)ptra[7];
                if ( v69 )
LABEL_158:
                  sub_186B220(v69 - 1);
              }
              v73 = (__int64 *)ptra[5];
              if ( v73 )
              {
                v74 = &v73[*((unsigned int *)v73 - 1)];
                if ( v73 >= v74 )
                  goto LABEL_167;
                do
                {
                  while ( 1 )
                  {
                    v75 = *v73;
                    if ( *v73 )
                    {
                      v76 = ptra[4];
                      v14 = (*(_DWORD *)(v75 + 8))-- == 1;
                      if ( v14 )
                        break;
                    }
                    if ( ++v73 >= v74 )
                      goto LABEL_166;
                  }
                  sub_15D7BC0(v76, v75);
                  ++v73;
                }
                while ( v73 < v74 );
LABEL_166:
                v73 = (__int64 *)ptra[5];
                if ( v73 )
LABEL_167:
                  sub_186B220(v73 - 1);
              }
              v77 = ptra[2];
              if ( v77 )
              {
                v78 = ptra[3];
                v14 = (*(_DWORD *)(v77 + 8))-- == 1;
                if ( v14 )
                  sub_15D7BC0(v78, v77);
              }
              sub_186B220(ptra);
            }
          }
        }
      }
    }
  }
  else
  {
    LODWORD(v2) = 0;
  }
  return (unsigned int)v2;
}

