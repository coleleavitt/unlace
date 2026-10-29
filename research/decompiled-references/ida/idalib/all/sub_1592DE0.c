void __fastcall sub_1592DE0(__int64 a1, unsigned __int64 a2, __int64 a3, double a4)
{
  __int64 v4; // r14
  __int64 *v6; // r14
  __int64 *v7; // rbx
  __int64 v8; // rsi
  __int64 p_ptr; // rsi
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r13
  char v12; // bl
  char v13; // bp
  char v14; // al
  char v15; // r14
  int v16; // eax
  int v17; // ecx
  int v18; // edi
  int v19; // edi
  bool v20; // al
  char v21; // dl
  char v22; // al
  char v23; // cl
  int v24; // eax
  int v25; // edx
  int v26; // ecx
  bool v27; // al
  __int64 v28; // rax
  unsigned int v29; // ebp
  char v30; // dl
  __int64 v31; // r13
  __int64 v32; // rbx
  __int64 i; // r13
  __int64 v34; // r9
  char v35; // di
  char v36; // si
  char v37; // cl
  char v38; // dl
  char v39; // al
  char ***v40; // r14
  __int64 v41; // rbp
  __int64 v42; // r15
  __int64 v43; // rax
  int v44; // r10d
  __int64 v45; // rbx
  unsigned __int64 v46; // [rsp+8h] [rbp-F0h]
  __int64 v47; // [rsp+20h] [rbp-D8h]
  __int64 v48; // [rsp+28h] [rbp-D0h]
  __int64 v49; // [rsp+28h] [rbp-D0h]
  unsigned int v50; // [rsp+34h] [rbp-C4h]
  __int64 v51; // [rsp+38h] [rbp-C0h]
  __int64 v52; // [rsp+40h] [rbp-B8h]
  __int64 v53; // [rsp+40h] [rbp-B8h]
  int v54; // [rsp+48h] [rbp-B0h]
  int v55; // [rsp+48h] [rbp-B0h]
  char v56; // [rsp+4Ch] [rbp-ACh]
  char v57; // [rsp+4Ch] [rbp-ACh]
  void *v58; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v59; // [rsp+58h] [rbp-A0h]
  _BYTE v60[32]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v61; // [rsp+80h] [rbp-78h] BYREF
  int v62; // [rsp+88h] [rbp-70h]
  char v63; // [rsp+8Ch] [rbp-6Ch]
  void *ptr; // [rsp+90h] [rbp-68h] BYREF
  __int64 v65; // [rsp+98h] [rbp-60h]
  _BYTE v66[88]; // [rsp+A0h] [rbp-58h] BYREF

  v4 = a2 - a1;
  v46 = a2;
  v48 = a3;
  if ( (__int64)(a2 - a1) > 1024 )
  {
    if ( a3 )
    {
      v47 = a1 + 64;
      while ( 1 )
      {
        --v48;
        v6 = (__int64 *)(a1 + (v4 >> 7 << 6));
        v7 = (__int64 *)(v46 - 64);
        v8 = v46 - 64;
        if ( sub_157E6E0(v47, (__int64)v6, a4) )
        {
          if ( sub_157E6E0((__int64)v6, v8, a4) )
            goto LABEL_89;
          if ( !sub_157E6E0(v47, (__int64)v7, a4) )
            goto LABEL_90;
        }
        else
        {
          if ( sub_157E6E0(v47, v8, a4) )
          {
LABEL_90:
            p_ptr = v47;
            sub_1592CF0((__int64 *)a1, (__int64 *)v47);
            goto LABEL_8;
          }
          if ( !sub_157E6E0((__int64)v6, (__int64)v7, a4) )
          {
LABEL_89:
            p_ptr = (__int64)v6;
            sub_1592CF0((__int64 *)a1, v6);
            goto LABEL_8;
          }
        }
        p_ptr = v46 - 64;
        sub_1592CF0((__int64 *)a1, v7);
LABEL_8:
        v10 = v47;
        v11 = v46;
        v12 = *(_BYTE *)(v47 + 11);
        v13 = *(_BYTE *)(a1 + 11);
        v51 = v47;
        if ( v12 )
        {
LABEL_9:
          v14 = v12;
          if ( v13 )
          {
            v15 = v13;
          }
          else
          {
LABEL_42:
            v15 = *(_BYTE *)(a1 + 12);
            if ( v15 != v14 )
            {
              if ( !v15 )
                goto LABEL_22;
              goto LABEL_44;
            }
            v15 = 0;
          }
          p_ptr = *(unsigned __int8 *)(a1 + 10);
          if ( *(_BYTE *)(v10 + 10) )
            goto LABEL_48;
        }
        else
        {
          while ( 1 )
          {
            v14 = *(_BYTE *)(v10 + 12);
            if ( !v13 )
              goto LABEL_42;
            if ( v14 )
              break;
LABEL_44:
            v10 += 64LL;
            v12 = *(_BYTE *)(v10 + 11);
            v51 = v10;
            if ( v12 )
              goto LABEL_9;
          }
          v15 = *(_BYTE *)(v10 + 12);
          p_ptr = *(unsigned __int8 *)(a1 + 10);
          if ( *(_BYTE *)(v10 + 10) )
          {
LABEL_48:
            if ( (_BYTE)p_ptr )
              goto LABEL_53;
            if ( !*(_BYTE *)(a1 + 8) )
            {
              if ( !*(_BYTE *)(a1 + 9) )
              {
                v17 = 4;
                v16 = 4;
LABEL_18:
                v18 = *(_DWORD *)(a1 + 24);
                p_ptr = v18 != 0;
                v19 = v18 != 0;
LABEL_19:
                if ( v16 == (_DWORD)p_ptr )
                {
LABEL_53:
                  v50 = sub_EEB7E0(*(_QWORD *)a1, p_ptr, a4);
                  v20 = (unsigned int)sub_EEB7E0(*(_QWORD *)v10, p_ptr, a4) < v50;
                }
                else
                {
LABEL_20:
                  v20 = v17 > v19;
                }
                if ( !v20 )
                  goto LABEL_22;
                goto LABEL_44;
              }
              v19 = 2;
              v17 = 4;
              goto LABEL_20;
            }
            goto LABEL_44;
          }
        }
        if ( *(_BYTE *)(v10 + 8) )
        {
          v17 = 3;
          v16 = 3;
        }
        else if ( *(_BYTE *)(v10 + 9) )
        {
          v17 = 2;
          v16 = 2;
        }
        else
        {
          v16 = *(_DWORD *)(v10 + 24) != 0;
          v17 = v16;
        }
        if ( !(_BYTE)p_ptr )
        {
          if ( *(_BYTE *)(a1 + 8) )
          {
            v19 = 3;
            p_ptr = 3;
          }
          else
          {
            if ( !*(_BYTE *)(a1 + 9) )
              goto LABEL_18;
            v19 = 2;
            p_ptr = 2;
          }
          goto LABEL_19;
        }
        do
        {
          while ( 1 )
          {
            do
            {
LABEL_22:
              v11 -= 64LL;
              v21 = *(_BYTE *)(v11 + 11);
              if ( v15 )
              {
LABEL_23:
                v22 = v15;
                if ( v21 )
                  break;
                goto LABEL_63;
              }
              while ( 1 )
              {
                v22 = *(_BYTE *)(a1 + 12);
                if ( v21 )
                  break;
LABEL_63:
                v30 = *(_BYTE *)(v11 + 12);
                if ( v22 == v30 )
                  goto LABEL_24;
                if ( !v30 )
                  goto LABEL_35;
                v11 -= 64LL;
                v21 = *(_BYTE *)(v11 + 11);
                if ( v15 )
                  goto LABEL_23;
              }
            }
            while ( !v22 );
LABEL_24:
            v23 = *(_BYTE *)(v11 + 10);
            if ( !*(_BYTE *)(a1 + 10) )
              break;
            if ( v23 )
            {
LABEL_55:
              v29 = sub_EEB7E0(*(_QWORD *)v11, p_ptr, a4);
              v27 = (unsigned int)sub_EEB7E0(*(_QWORD *)a1, p_ptr, a4) < v29;
              goto LABEL_34;
            }
            if ( !*(_BYTE *)(v11 + 8) )
            {
              if ( *(_BYTE *)(v11 + 9) )
              {
                v26 = 2;
                v25 = 4;
                goto LABEL_33;
              }
              v25 = 4;
              v24 = 4;
LABEL_31:
              p_ptr = *(_DWORD *)(v11 + 24) != 0;
              v26 = *(_DWORD *)(v11 + 24) != 0;
LABEL_32:
              if ( v24 == (_DWORD)p_ptr )
                goto LABEL_55;
              goto LABEL_33;
            }
          }
          if ( *(_BYTE *)(a1 + 8) )
          {
            v25 = 3;
            v24 = 3;
          }
          else if ( *(_BYTE *)(a1 + 9) )
          {
            v25 = 2;
            v24 = 2;
          }
          else
          {
            v24 = *(_DWORD *)(a1 + 24) != 0;
            v25 = v24;
          }
          if ( v23 )
            break;
          if ( *(_BYTE *)(v11 + 8) )
          {
            v26 = 3;
            p_ptr = 3;
            goto LABEL_32;
          }
          if ( !*(_BYTE *)(v11 + 9) )
            goto LABEL_31;
          p_ptr = 2;
          v26 = 2;
          if ( v24 == 2 )
            goto LABEL_55;
LABEL_33:
          v27 = v25 > v26;
LABEL_34:
          ;
        }
        while ( v27 );
LABEL_35:
        if ( v10 < v11 )
        {
          v28 = *(_QWORD *)v10;
          HIBYTE(v62) = v12;
          v61 = v28;
          LOWORD(v62) = *(_WORD *)(v10 + 8);
          BYTE2(v62) = *(_BYTE *)(v10 + 10);
          v63 = *(_BYTE *)(v10 + 12);
          ptr = v66;
          v65 = 0x200000000LL;
          if ( *(_DWORD *)(v10 + 24) )
            sub_1591FE0((char ***)&ptr, (char ***)(v10 + 16));
          *(_QWORD *)v10 = *(_QWORD *)v11;
          *(_BYTE *)(v10 + 8) = *(_BYTE *)(v11 + 8);
          *(_BYTE *)(v10 + 9) = *(_BYTE *)(v11 + 9);
          *(_BYTE *)(v10 + 10) = *(_BYTE *)(v11 + 10);
          *(_BYTE *)(v10 + 11) = *(_BYTE *)(v11 + 11);
          *(_BYTE *)(v10 + 12) = *(_BYTE *)(v11 + 12);
          sub_1591FE0((char ***)(v10 + 16), (char ***)(v11 + 16));
          *(_QWORD *)v11 = v61;
          *(_DWORD *)(v11 + 8) = v62;
          *(_BYTE *)(v11 + 12) = v63;
          p_ptr = (__int64)&ptr;
          sub_1591FE0((char ***)(v11 + 16), (char ***)&ptr);
          if ( ptr != v66 )
            free(ptr);
          v13 = *(_BYTE *)(a1 + 11);
          goto LABEL_44;
        }
        v4 = v10 - a1;
        sub_1592DE0(v10, v46, v48);
        if ( (__int64)(v10 - a1) <= 1024 )
          return;
        v46 = v10;
        if ( !v48 )
        {
          v31 = v51;
          goto LABEL_73;
        }
      }
    }
    v31 = a2;
LABEL_73:
    v49 = v31;
    v32 = ((v4 >> 6) - 2) >> 1;
    for ( i = a1 + (v32 << 6); ; i -= 64 )
    {
      v34 = *(_QWORD *)i;
      v35 = *(_BYTE *)(i + 8);
      v58 = v60;
      v36 = *(_BYTE *)(i + 9);
      v37 = *(_BYTE *)(i + 10);
      v59 = 0x200000000LL;
      v38 = *(_BYTE *)(i + 11);
      v39 = *(_BYTE *)(i + 12);
      v52 = v34;
      LOBYTE(v54) = v35;
      BYTE1(v54) = v36;
      BYTE2(v54) = v37;
      HIBYTE(v54) = v38;
      v56 = v39;
      if ( *(_DWORD *)(i + 24) )
      {
        sub_1591FE0((char ***)&v58, (char ***)(i + 16));
        ptr = v66;
        v65 = 0x200000000LL;
        v61 = v52;
        v62 = v54;
        v63 = v56;
        if ( (_DWORD)v59 )
          sub_1591FE0((char ***)&ptr, (char ***)&v58);
      }
      else
      {
        v61 = v34;
        LOBYTE(v62) = v35;
        BYTE1(v62) = v36;
        BYTE2(v62) = v37;
        HIBYTE(v62) = v38;
        v63 = v39;
        ptr = v66;
        v65 = 0x200000000LL;
      }
      sub_1592100(a1, v32, v4 >> 6, &v61, a4);
      if ( ptr != v66 )
        free(ptr);
      if ( !v32 )
        break;
      --v32;
      if ( v58 != v60 )
        free(v58);
    }
    if ( v58 != v60 )
      free(v58);
    v40 = (char ***)(a1 + 16);
    v41 = a1;
    v42 = v49;
    do
    {
      while ( 1 )
      {
        v42 -= 64;
        v43 = *(_QWORD *)v42;
        v44 = *(_DWORD *)(v42 + 24);
        v59 = 0x200000000LL;
        v53 = v43;
        v55 = *(_DWORD *)(v42 + 8);
        v57 = *(_BYTE *)(v42 + 12);
        v58 = v60;
        if ( v44 )
          sub_1591FE0((char ***)&v58, (char ***)(v42 + 16));
        *(_QWORD *)v42 = *(_QWORD *)v41;
        *(_BYTE *)(v42 + 8) = *(_BYTE *)(v41 + 8);
        *(_BYTE *)(v42 + 9) = *(_BYTE *)(v41 + 9);
        *(_BYTE *)(v42 + 10) = *(_BYTE *)(v41 + 10);
        *(_BYTE *)(v42 + 11) = *(_BYTE *)(v41 + 11);
        *(_BYTE *)(v42 + 12) = *(_BYTE *)(v41 + 12);
        sub_1591FE0((char ***)(v42 + 16), v40);
        ptr = v66;
        v65 = 0x200000000LL;
        v61 = v53;
        v62 = v55;
        v63 = v57;
        if ( (_DWORD)v59 )
          sub_1591FE0((char ***)&ptr, (char ***)&v58);
        v45 = v42 - v41;
        sub_1592100(v41, 0, (v42 - v41) >> 6, &v61, a4);
        if ( ptr != v66 )
          free(ptr);
        if ( v58 == v60 )
          break;
        free(v58);
        if ( v45 <= 64 )
          return;
      }
    }
    while ( v45 > 64 );
  }
}
