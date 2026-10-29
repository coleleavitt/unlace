__int64 __fastcall sub_6D4600(__int64 **a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // r15
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // r12
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r14
  unsigned int v12; // r13d
  _DWORD *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 *v17; // r14
  __int64 v18; // rax
  void *v20; // r12
  void *v21; // rbp
  __int64 v23; // r13
  __int64 *v24; // rdi
  char v25; // al
  __int64 *v26; // rdi
  __int64 v27; // [rsp+18h] [rbp-100h]
  __int64 *v28; // [rsp+20h] [rbp-F8h]
  __int64 v29; // [rsp+20h] [rbp-F8h]
  __int64 v30; // [rsp+28h] [rbp-F0h]
  __int64 v31; // [rsp+30h] [rbp-E8h]
  __int64 v32; // [rsp+38h] [rbp-E0h]
  char v33; // [rsp+4Fh] [rbp-C9h] BYREF
  _QWORD *v34; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v35; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+68h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+78h] [rbp-A0h]
  __int64 v40; // [rsp+80h] [rbp-98h] BYREF
  __int64 v41; // [rsp+88h] [rbp-90h]
  __int64 v42; // [rsp+90h] [rbp-88h] BYREF
  __int64 v43; // [rsp+98h] [rbp-80h]
  _QWORD v44[2]; // [rsp+A0h] [rbp-78h] BYREF
  _QWORD v45[2]; // [rsp+B0h] [rbp-68h] BYREF
  _QWORD v46[2]; // [rsp+C0h] [rbp-58h] BYREF
  _QWORD v47[9]; // [rsp+D0h] [rbp-48h] BYREF

  v5 = **a1;
  v6 = (_QWORD *)sub_186B270(0x18u);
  v44[0] = 0;
  v6[1] = a3;
  v7 = v6 + 1;
  v8 = 0;
  *v6 = 0x100000002LL;
  v44[1] = 0;
  v45[0] = 1;
  v45[1] = 0;
  v46[0] = 0;
  v46[1] = 0;
  v47[0] = 1;
  v47[1] = 0;
  v27 = v5;
LABEL_2:
  if ( v7 )
  {
    while ( 1 )
    {
      v9 = *((_DWORD *)v7 - 1);
      if ( !v9 )
        break;
      v10 = (unsigned int)(v9 - 1);
      v11 = v7[v10];
      *((_DWORD *)v7 - 1) = v10;
      v12 = sub_15D37A0(a1 + 1, v11);
      if ( !(_BYTE)v12 )
      {
        sub_15D0A90(a1 + 1, v11, 1);
        if ( (unsigned __int8)sub_168D740(a2 + 4, v11) )
        {
          if ( *a2 == v11 || *(_WORD *)(v11 + 4) )
            goto LABEL_14;
          v13 = *(_DWORD **)(*(_QWORD *)(v11 + 16) + 24LL);
          v14 = *(unsigned int *)(v11 + 24);
          if ( v13 && *v13 == 5 && v13[1] == 16 && (_DWORD)v14 == 2 )
          {
            v23 = *(_QWORD *)(v11 + 32);
            if ( (unsigned __int8)sub_1666AE0(*a1 + 2, *(_QWORD *)(v11 + 40), v44, &v33) )
            {
              v24 = *a1;
              v38 = v8;
              v39 = v27;
              v25 = sub_6D3AC0(v24, a2, v23, (int *)v46, &v38);
              v8 = v38;
              v27 = v39;
              if ( v25 )
              {
                v26 = *a1;
                v42 = 0;
                v43 = v5;
                v40 = 0;
                v41 = v5;
                sub_6C2570(v26, (__int64)v44, (int)&v42, (int)&v40);
                v35 = v8;
                v32 = v42;
                v29 = v40;
                v31 = v41;
                v30 = v43;
                if ( v8 )
                  ++*(_DWORD *)(v8 + 8);
                sub_6C01B0(a1 + 37, &v35);
                sub_6C09A0((__int64 *)a1 + 39, (__int64)v44);
                sub_6C09A0((__int64 *)a1 + 38, (__int64)v46);
                ++*(_DWORD *)(v11 + 8);
                v36 = v11;
                sub_6C00F0(a1 + 41, &v36);
                v37 = v29;
                if ( v29 )
                  ++*(_DWORD *)(v29 + 8);
                sub_6C00F0(a1 + 43, &v37);
                sub_6BFE10(v32, v30);
                sub_6BFE10(v29, v31);
                goto LABEL_2;
              }
            }
            v14 = *(unsigned int *)(v11 + 24);
          }
          v15 = 8 * v14;
          v16 = v11 + 32 + v15;
          v17 = (__int64 *)(v11 + 32);
          v28 = (__int64 *)v16;
          if ( !v15 )
            goto LABEL_2;
          do
          {
            v18 = *v17;
            v34 = v7;
            v37 = v18;
            sub_6C01B0(&v34, &v37);
            v7 = v34;
            ++v17;
          }
          while ( v28 != v17 );
          if ( !v34 )
            break;
        }
      }
    }
  }
  v12 = 1;
LABEL_14:
  if ( v8 )
  {
    if ( (*(_DWORD *)(v8 + 8))-- == 1 )
      sub_15D7BC0(v27, v8);
  }
  v20 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v46);
  sub_182CBA0(v20, v47);
  v21 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v44);
  sub_182CBA0(v21, v45);
  if ( v7 )
    sub_186B220(v7 - 1);
  return v12;
}

