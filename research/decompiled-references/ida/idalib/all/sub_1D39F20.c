void __fastcall sub_1D39F20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 *a5)
{
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // r12
  __int64 v8; // r15
  _QWORD *v9; // rsi
  __int64 *v10; // r14
  __int64 v11; // r13
  unsigned __int8 v12; // bl
  unsigned int v13; // ebp
  unsigned int v16; // ebx
  __int64 v17; // rdx
  unsigned __int64 v18; // rsi
  __int64 v19; // rsi
  unsigned int v20; // ebx
  __int64 v21; // rsi
  __int64 v22; // rsi
  __int64 v23; // rsi
  unsigned int v24; // r14d
  __int64 v25; // rdx
  __int64 v26; // rbx
  __int64 v27; // r13
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // r13
  __int64 v32; // rsi
  unsigned __int64 v33; // rax
  unsigned int v34; // r14d
  __int64 v35; // rcx
  int v36; // r9d
  __int64 v37; // rax
  __int64 *v38; // rdx
  unsigned int v39; // ebx
  __int64 v40; // rsi
  __int64 v41; // rdi
  int v42; // eax
  __int64 v43; // rsi
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rsi
  bool v47; // al
  __int64 *v48; // rbx
  __int64 v49; // rsi
  int v50; // eax
  __int64 *v51; // [rsp+0h] [rbp-68h]
  int v52; // [rsp+0h] [rbp-68h]
  __int64 v53; // [rsp+0h] [rbp-68h]
  int v54; // [rsp+Ch] [rbp-5Ch]
  unsigned __int64 *v55; // [rsp+10h] [rbp-58h] BYREF
  int v56; // [rsp+18h] [rbp-50h]
  __int64 v57; // [rsp+38h] [rbp-30h]
  __int64 v58; // [rsp+40h] [rbp-28h]
  __int64 v59; // [rsp+48h] [rbp-20h]
  __int64 v60; // [rsp+60h] [rbp-8h]

  v9 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( v9 && (*(_BYTE *)(*v9 + 17LL) & 4) != 0 )
  {
    v60 = v8;
    v59 = v7;
    v58 = v6;
    v57 = v5;
    v10 = (__int64 *)(v9[1] & 0xFFFFFFFFFFFFFFF0LL);
    v11 = *v10;
    v12 = a3;
    v13 = a4;
    switch ( *(_BYTE *)(*v10 + 16) )
    {
      case 2:
      case 3:
      case 5:
        v16 = (unsigned __int8)a3;
        goto LABEL_38;
      case 4:
        v16 = (unsigned __int8)a3;
        sub_1D3A500(a1, *(_QWORD *)(v11 + 40), (unsigned __int8)a3, a4, a5);
        v11 = *v10;
LABEL_38:
        v18 = *(_QWORD *)(v11 + 32);
        goto LABEL_7;
      case 7:
      case 0xE:
        if ( (_BYTE)a3 )
          return;
        v22 = *(_QWORD *)(v11 + 32);
        goto LABEL_15;
      case 0xB:
      case 0x1F:
      case 0x26:
      case 0x2A:
      case 0x39:
      case 0x3A:
        v19 = *(_QWORD *)(v11 + 32);
        goto LABEL_10;
      case 0xF:
      case 0x33:
        if ( (_BYTE)a3 )
          return;
        v23 = *(_QWORD *)(v11 + 24);
        goto LABEL_18;
      case 0x10:
      case 0x11:
        v19 = *(_QWORD *)(v11 + 24);
LABEL_10:
        sub_1D39F20(a1, v19, (unsigned __int8)a3);
        return;
      case 0x12:
      case 0x15:
        v20 = (unsigned __int8)a3;
        sub_1D39F20(a1, *(_QWORD *)(v11 + 40), (unsigned __int8)a3);
        v21 = *(_QWORD *)(v11 + 32);
        goto LABEL_12;
      case 0x13:
        v44 = sub_F57B50(*v10);
        sub_1D3A500(a1, v44, v12, v13, a5);
        return;
      case 0x14:
        if ( !(_BYTE)a3 )
        {
          v43 = *(_QWORD *)(v11 + 32);
          if ( v43 )
            sub_1D3A4A0(a1, v43, 0);
        }
        return;
      case 0x16:
        if ( !(_BYTE)a3 )
        {
          if ( (*(_QWORD *)(v11 + 32) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            sub_1D3A4A0(a1, *(_QWORD *)(v11 + 32) & 0xFFFFFFFFFFFFFFF8LL, 0);
          v30 = v11 + 48;
          v31 = v11 + 48 + 24LL * *(unsigned int *)(v11 + 20);
          while ( v31 != v30 )
          {
            v32 = v30;
            v30 += 24;
            sub_1D3A850(a1, v32, 0, v13, a5);
          }
        }
        return;
      case 0x17:
        v20 = (unsigned __int8)a3;
        sub_1D39F20(a1, *(_QWORD *)(v11 + 32), (unsigned __int8)a3);
        v21 = *(_QWORD *)(v11 + 40);
        goto LABEL_12;
      case 0x1A:
        v34 = (unsigned __int8)a3;
        sub_1D39F20(a1, *(_QWORD *)(v11 + 24), (unsigned __int8)a3);
        v36 = *(unsigned __int16 *)(v11 + 22);
        if ( !*(_WORD *)(v11 + 22) )
          goto LABEL_64;
        v37 = 0;
        if ( v12 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v38 = (__int64 *)(v11 + 8 * v37 + 48);
              v39 = v37 + 1;
              v40 = *v38;
              if ( v36 == (_DWORD)v37 + 1 )
              {
                sub_1D39F20(a1, v40, 1);
                goto LABEL_64;
              }
              v51 = (__int64 *)(v11 + 8 * v37 + 48);
              v41 = *(_QWORD *)(v40 & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(v41 + 16) != 38 )
                break;
LABEL_48:
              v37 = v39;
            }
            if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v41 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 38 )
            {
              v54 = v36;
              v45 = sub_F63050(v41, v40, v38, v35);
              v36 = v54;
              if ( v45 )
                goto LABEL_48;
              v40 = *v51;
            }
            v52 = v36;
            sub_1D39F20(a1, v40, 1);
            v36 = v52;
            v37 = v39;
          }
        }
        v48 = (__int64 *)(v11 + 48);
        v53 = v11 + 8LL * (unsigned int)(v36 - 1) + 56;
        do
        {
          v49 = *v48++;
          sub_1D39F20(a1, v49, 0);
        }
        while ( (__int64 *)v53 != v48 );
LABEL_64:
        if ( ((*(_BYTE *)(v11 + 19) >> 1) & 0xFu) - 6 <= 2 )
        {
          v46 = *(_QWORD *)sub_1D38400(v11);
          if ( v46 )
            sub_1D3A500(a1, v46, v34, v13, a5);
        }
        break;
      case 0x1B:
        v16 = (unsigned __int8)a3;
        sub_1D39F20(a1, *(_QWORD *)(v11 + 32), (unsigned __int8)a3);
        v18 = *(_QWORD *)(*v10 + 40);
        if ( (v18 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          goto LABEL_7;
        return;
      case 0x1D:
        v11 = *(_QWORD *)(*(_QWORD *)(v11 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        goto LABEL_20;
      case 0x20:
        v20 = (unsigned __int8)a3;
        sub_1D39F20(a1, *(_QWORD *)(v11 + 32), (unsigned __int8)a3);
        sub_1D3A500(a1, *(_QWORD *)(v11 + 40), (unsigned __int8)v20, v13, a5);
        v21 = *(_QWORD *)(v11 + 48);
LABEL_12:
        sub_1D3A500(a1, v21, v20, v13, a5);
        return;
      case 0x21:
        v16 = (unsigned __int8)a3;
        sub_1D39F20(a1, *(_QWORD *)(v11 + 32), (unsigned __int8)a3);
        v17 = *(_QWORD *)(v11 + 40);
        v18 = 0;
        if ( ((*(__int64 *)(v17 + 8) >> 1) & 3) == 2 )
          v18 = *(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFF0LL;
LABEL_7:
        sub_1D39F20(a1, v18, v16);
        return;
      case 0x27:
        if ( !(_BYTE)a3 )
        {
          sub_1D39F20(a1, *(_QWORD *)(v11 + 32), 0);
          v23 = *(_QWORD *)(*v10 + 40);
LABEL_18:
          sub_1D3A500(a1, v23, 0, v13, a5);
        }
        return;
      case 0x2B:
      case 0x2C:
        v29 = sub_9B4870(*v10, (__int64)v9, a3, a4, (__int64)a5);
        sub_1D39F20(a1, v29, v12);
        return;
      case 0x2D:
        v33 = sub_F5E4F0(*v10);
        if ( (unsigned int)sub_BBE590(v33) == v13 )
        {
          v50 = *(unsigned __int16 *)(v11 + 20);
          v55 = a5;
          v56 = v50;
          sub_183AAE0(&v55, 1);
        }
        sub_F5E520((__int64)&v55, v11);
        sub_1D3A850(a1, &v55, v12, v13, a5);
        return;
      case 0x31:
LABEL_20:
        v24 = (unsigned __int8)a3;
        sub_1D3A610(a1, *(_QWORD *)(v11 + 32), (unsigned __int8)a3, (unsigned int)a4, a5);
        v25 = v11 + 48;
        if ( !v12 || (v47 = sub_1D36810(v11 + 48, *(unsigned int *)(v11 + 20)), v25 = v11 + 48, !v47) )
        {
          v26 = v25;
          v27 = v25 + 24LL * *(unsigned int *)(v11 + 20);
          if ( v27 != v25 )
          {
            do
            {
              v28 = v26;
              v26 += 24;
              sub_1D3A850(a1, v28, v24, v13, a5);
            }
            while ( v27 != v26 );
          }
        }
        return;
      case 0x32:
        if ( (_DWORD)a4 == (*(_WORD *)(v11 + 20) & 0x7FFF) )
        {
          v42 = *(unsigned __int16 *)(v11 + 22);
          v55 = a5;
          v56 = v42;
          sub_183AAE0(&v55, 1);
        }
        return;
      case 0x34:
        if ( (_BYTE)a3 )
          return;
        v22 = *(_QWORD *)(v11 + 24);
        goto LABEL_15;
      case 0x36:
        if ( (_BYTE)a3 )
          return;
        v22 = *(_QWORD *)(v11 + 40);
LABEL_15:
        sub_1D39F20(a1, v22, 0);
        return;
      default:
        return;
    }
  }
}
