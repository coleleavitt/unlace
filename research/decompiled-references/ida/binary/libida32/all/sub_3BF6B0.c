__int64 __fastcall sub_3BF6B0(char *a1)
{
  __int64 v1; // rsi
  unsigned __int64 v3; // rdi
  char v4; // r12
  char *v5; // rbx
  unsigned int v6; // ebp
  int v7; // r13d
  int v9; // r14d
  _BYTE *v10; // rdx
  int v11; // eax
  char *v12; // rax
  __int64 (__fastcall *v13)(char *, char); // rax
  __int64 v14; // r12
  unsigned __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rsi
  __int64 (__fastcall *v18)(char *, char); // rax
  __int64 v19; // r12
  unsigned __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rsi
  __int64 (__fastcall *v23)(char *, char); // rax
  __int64 v24; // r12
  unsigned __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rsi
  __int64 (__fastcall *v28)(char *, char); // rax
  __int64 v29; // r12
  unsigned __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rax
  void (__fastcall *v33)(char *, __int64, _QWORD); // rbx
  __int64 v34; // rax
  unsigned __int8 default_encoding_idx; // al
  __int64 encoding_name; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int8 sa; // [rsp+8h] [rbp-D0h]
  char *s; // [rsp+8h] [rbp-D0h]
  unsigned __int64 v43; // [rsp+10h] [rbp-C8h]
  __int64 v44; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v45; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v46; // [rsp+10h] [rbp-C8h]
  __int64 v47; // [rsp+18h] [rbp-C0h]
  __int64 v48; // [rsp+18h] [rbp-C0h]
  __int64 v49; // [rsp+18h] [rbp-C0h]
  char v50; // [rsp+2Bh] [rbp-ADh] BYREF
  unsigned int v51; // [rsp+2Ch] [rbp-ACh] BYREF
  _BYTE v52[32]; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v53[3]; // [rsp+50h] [rbp-88h] BYREF
  __m128i si128; // [rsp+68h] [rbp-70h]
  _BYTE v55[16]; // [rsp+80h] [rbp-58h] BYREF
  char v56; // [rsp+90h] [rbp-48h] BYREF
  char v57; // [rsp+91h] [rbp-47h] BYREF
  unsigned __int64 v58; // [rsp+98h] [rbp-40h]

  v1 = 4;
  v58 = __readfsqword(0x28u);
  v3 = 45;
  if ( (unsigned __int8)getinf_flag(45, 4) )
    return v58 - __readfsqword(0x28u);
  v4 = 0;
  v5 = a1 + 237;
  v6 = 0;
  v7 = 0;
  while ( *v5 )
  {
    v3 = *((_QWORD *)a1 + 66);
    v1 = v6;
    if ( (unsigned __int8)is_defarg(v3, v6) )
      goto LABEL_8;
    if ( *v5 != 5 )
      goto LABEL_8;
    if ( (unsigned int)(*(_DWORD *)(v5 + 7) - 32) > 0xDE )
      goto LABEL_8;
    v1 = *((unsigned int *)a1 + 4);
    v3 = *(unsigned int *)(*((_QWORD *)a1 + 58) + 104LL);
    if ( (unsigned __int8)netnode_charval(v3, v1, 256) )
      goto LABEL_8;
    v9 = *(_DWORD *)(v5 + 7);
    if ( v7 <= 0 )
    {
      v11 = 0;
    }
    else
    {
      v10 = v55;
      v11 = 0;
      while ( *v10 != (_BYTE)v9 )
      {
        ++v11;
        ++v10;
        if ( v11 == v7 )
          goto LABEL_16;
      }
    }
    if ( v11 != v7 )
      goto LABEL_8;
LABEL_16:
    v50 = v9;
    if ( (v9 & 0x80u) == 0 && (unsigned __int8)is_cp_graphical((unsigned __int8)v9) )
    {
      v56 = v50;
      v12 = &v57;
LABEL_19:
      *v12 = 0;
      if ( !v4 )
      {
        v13 = *(__int64 (__fastcall **)(char *, char))(*(_QWORD *)a1 + 96LL);
        if ( (char *)v13 == (char *)sub_3598B0 )
        {
          v14 = *((_QWORD *)a1 + 4);
          if ( v14 )
          {
            v15 = v14 + 1;
            v16 = *((_QWORD *)a1 + 4);
            --v14;
          }
          else
          {
            v16 = 1;
            v15 = 2;
          }
          v17 = *((_QWORD *)a1 + 3);
          if ( *((_QWORD *)a1 + 5) < v15 )
          {
            v49 = v16;
            v46 = v15;
            v40 = qvector_reserve(a1 + 24, v17, v15, 1);
            v16 = v49;
            v15 = v46;
            *((_QWORD *)a1 + 3) = v40;
            v17 = v40;
          }
          *((_QWORD *)a1 + 4) = v15;
          *(_BYTE *)(v17 + v14) = 32;
          *(_BYTE *)(*((_QWORD *)a1 + 3) + v16) = 0;
        }
        else
        {
          v13(a1, 32);
        }
        (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)a1 + 64LL))(a1, 4);
        (*(void (__fastcall **)(char *, _QWORD, _QWORD))(*(_QWORD *)a1 + 56LL))(
          a1,
          *(_QWORD *)(*((_QWORD *)a1 + 60) + 48LL),
          0);
      }
      v18 = *(__int64 (__fastcall **)(char *, char))(*(_QWORD *)a1 + 96LL);
      if ( (char *)v18 == (char *)sub_3598B0 )
      {
        v19 = *((_QWORD *)a1 + 4);
        if ( v19 )
        {
          v20 = v19 + 1;
          v21 = *((_QWORD *)a1 + 4);
          --v19;
        }
        else
        {
          v21 = 1;
          v20 = 2;
        }
        v22 = *((_QWORD *)a1 + 3);
        if ( *((_QWORD *)a1 + 5) < v20 )
        {
          v47 = v21;
          v43 = v20;
          v37 = qvector_reserve(a1 + 24, v22, v20, 1);
          v21 = v47;
          v20 = v43;
          *((_QWORD *)a1 + 3) = v37;
          v22 = v37;
        }
        *((_QWORD *)a1 + 4) = v20;
        *(_BYTE *)(v22 + v19) = 32;
        *(_BYTE *)(*((_QWORD *)a1 + 3) + v21) = 0;
      }
      else
      {
        v18(a1, 32);
      }
      v23 = *(__int64 (__fastcall **)(char *, char))(*(_QWORD *)a1 + 96LL);
      if ( (char *)v23 == (char *)sub_3598B0 )
      {
        v24 = *((_QWORD *)a1 + 4);
        if ( v24 )
        {
          v25 = v24 + 1;
          v26 = *((_QWORD *)a1 + 4);
          --v24;
        }
        else
        {
          v26 = 1;
          v25 = 2;
        }
        v27 = *((_QWORD *)a1 + 3);
        if ( *((_QWORD *)a1 + 5) < v25 )
        {
          v48 = v26;
          v45 = v25;
          v39 = qvector_reserve(a1 + 24, v27, v25, 1);
          v26 = v48;
          v25 = v45;
          *((_QWORD *)a1 + 3) = v39;
          v27 = v39;
        }
        *((_QWORD *)a1 + 4) = v25;
        *(_BYTE *)(v27 + v24) = 39;
        *(_BYTE *)(*((_QWORD *)a1 + 3) + v26) = 0;
      }
      else
      {
        v23(a1, 39);
      }
      v3 = (unsigned __int64)a1;
      (*(void (__fastcall **)(char *, char *, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, &v56, 0);
      v28 = *(__int64 (__fastcall **)(char *, char))(*(_QWORD *)a1 + 96LL);
      if ( (char *)v28 == (char *)sub_3598B0 )
      {
        v29 = *((_QWORD *)a1 + 4);
        if ( v29 )
        {
          v30 = v29 + 1;
          v31 = *((_QWORD *)a1 + 4);
          --v29;
        }
        else
        {
          v31 = 1;
          v30 = 2;
        }
        v1 = *((_QWORD *)a1 + 3);
        if ( *((_QWORD *)a1 + 5) < v30 )
        {
          v3 = (unsigned __int64)(a1 + 24);
          v44 = v31;
          s = (char *)v30;
          v38 = qvector_reserve(a1 + 24, v1, v30, 1);
          v31 = v44;
          v30 = (unsigned __int64)s;
          *((_QWORD *)a1 + 3) = v38;
          v1 = v38;
        }
        *((_QWORD *)a1 + 4) = v30;
        *(_BYTE *)(v1 + v29) = 39;
        *(_BYTE *)(*((_QWORD *)a1 + 3) + v31) = 0;
      }
      else
      {
        v1 = 39;
        v3 = (unsigned __int64)a1;
        v28(a1, 39);
      }
      v32 = v7;
      v4 = 1;
      ++v7;
      v55[v32] = v9;
      goto LABEL_8;
    }
    v53[1] = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_2383880);
    v53[0] = off_2B13EB0;
    v53[2] = &v50;
    sa = getinf_flag(3, 32);
    default_encoding_idx = get_default_encoding_idx(1);
    encoding_name = get_encoding_name(default_encoding_idx);
    sub_894230(v52, v53, encoding_name, sa, 0);
    v3 = (unsigned __int64)v52;
    v1 = (__int64)&v56;
    if ( !(unsigned int)sub_894330(v52, &v56, &v51) )
    {
      v3 = v51;
      if ( (unsigned __int8)is_cp_graphical(v51) )
      {
        v3 = (unsigned __int64)&v56;
        v12 = &v56 + strlen(&v56);
        if ( &v56 < v12 )
          goto LABEL_19;
      }
    }
LABEL_8:
    ++v6;
    v5 += 24;
    if ( v6 == 8 )
      break;
  }
  if ( !v4 )
    return v58 - __readfsqword(0x28u);
  v33 = *(void (__fastcall **)(char *, __int64, _QWORD))(*(_QWORD *)a1 + 56LL);
  v34 = closing_comment(v3, v1);
  v33(a1, v34, 0);
  return (*(__int64 (__fastcall **)(char *, __int64))(*(_QWORD *)a1 + 72LL))(a1, 4);
}

