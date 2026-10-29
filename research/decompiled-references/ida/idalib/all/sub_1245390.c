void __fastcall sub_1245390(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // r13d
  unsigned int v6; // r14d
  __int64 v7; // rax
  __int64 v8; // r15
  unsigned __int8 *v9; // rbx
  __int64 v10; // r14
  _QWORD *v11; // rdx
  __int64 v12; // rax
  void **v13; // rbp
  unsigned __int64 v14; // rax
  void **v15; // r12
  void **v16; // rbx
  void **v17; // rdi
  void **v18; // rdi
  void **v19; // rbx
  void **v20; // r12
  __int64 v21; // rax
  bool v22; // zf
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // r13
  __int64 v30; // r15
  __int64 v31; // r13
  void *v32; // rdi
  void *v33[2]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+10h] [rbp-98h] BYREF
  void *v35; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v36; // [rsp+28h] [rbp-80h]
  __int64 v37; // [rsp+30h] [rbp-78h]
  void *v38; // [rsp+40h] [rbp-68h]
  __int64 v39; // [rsp+50h] [rbp-58h] BYREF
  __int16 v40; // [rsp+60h] [rbp-48h]

  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 608LL))(a1);
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 616LL))(a1, a2);
  if ( v6 > 1 && (v8 = sub_10DCD30(a2, 0xD20u)) != 0 )
  {
    sub_FC70B0((__int64)&v35, **(_QWORD **)(a1 + 8), 0, 501);
    v9 = (unsigned __int8 *)v35;
    v10 = **(_QWORD **)(v8 + 48);
    if ( !v35 )
    {
      v25 = v36;
      v26 = *(_DWORD *)(v36 + 14976);
      if ( v26 )
      {
        v28 = (unsigned int)(v26 - 1);
        *(_DWORD *)(v36 + 14976) = v28;
        v9 = *(unsigned __int8 **)(v25 + 8 * v28 + 14848);
        v29 = *((unsigned int *)v9 + 134);
        *v9 = 0;
        v30 = *((_QWORD *)v9 + 66);
        *((_DWORD *)v9 + 106) = 0;
        v31 = v30 + (v29 << 6);
        while ( v30 != v31 )
        {
          while ( 1 )
          {
            v31 -= 64;
            v32 = *(void **)(v31 + 24);
            if ( v32 == (void *)(v31 + 40) )
              break;
            operator delete(v32);
            if ( v30 == v31 )
              goto LABEL_56;
          }
        }
LABEL_56:
        *((_DWORD *)v9 + 134) = 0;
      }
      else
      {
        v9 = (unsigned __int8 *)operator new(0x3A0u);
        *v9 = 0;
        *((_QWORD *)v9 + 12) = v9 + 112;
        *((_QWORD *)v9 + 16) = v9 + 144;
        *((_QWORD *)v9 + 20) = v9 + 176;
        *((_QWORD *)v9 + 24) = v9 + 208;
        *((_QWORD *)v9 + 28) = v9 + 240;
        *((_QWORD *)v9 + 32) = v9 + 272;
        *((_QWORD *)v9 + 36) = v9 + 304;
        *((_QWORD *)v9 + 40) = v9 + 336;
        *((_QWORD *)v9 + 44) = v9 + 368;
        *((_QWORD *)v9 + 48) = v9 + 400;
        *((_QWORD *)v9 + 52) = v9 + 432;
        *((_QWORD *)v9 + 13) = 0;
        v9[112] = 0;
        *((_QWORD *)v9 + 17) = 0;
        v9[144] = 0;
        *((_QWORD *)v9 + 21) = 0;
        v9[176] = 0;
        *((_QWORD *)v9 + 25) = 0;
        v9[208] = 0;
        *((_QWORD *)v9 + 29) = 0;
        v9[240] = 0;
        *((_QWORD *)v9 + 33) = 0;
        v9[272] = 0;
        *((_QWORD *)v9 + 37) = 0;
        v9[304] = 0;
        *((_QWORD *)v9 + 41) = 0;
        v9[336] = 0;
        *((_QWORD *)v9 + 45) = 0;
        v9[368] = 0;
        *((_QWORD *)v9 + 49) = 0;
        v9[400] = 0;
        *((_QWORD *)v9 + 53) = 0x800000000LL;
        *((_QWORD *)v9 + 66) = v9 + 544;
        *((_QWORD *)v9 + 67) = 0x600000000LL;
      }
      v35 = v9;
    }
    v9[*v9 + 1] = 1;
    v11 = v35;
    v12 = *(unsigned __int8 *)v35;
    *(_BYTE *)v35 = v12 + 1;
    v11[v12 + 2] = v10;
    sub_22BC1E0(v33, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), 0);
    sub_AEC220((unsigned __int8 **)&v35, (_BYTE *)v33[0], (signed __int64)v33[1]);
    if ( v33[0] != &v34 )
      operator delete(v33[0]);
    if ( (_BYTE)v40 )
    {
      sub_FC7790(v37, (__int64 *)&v35, SHIBYTE(v40));
      v37 = 0;
      v40 = 0;
    }
    if ( v38 != &v39 )
      operator delete(v38);
    v13 = (void **)v35;
    if ( v35 )
    {
      v14 = v36;
      if ( v36 )
      {
        if ( (unsigned __int64)v35 >= v36 && (unsigned __int64)v35 <= v36 + 14848 )
        {
          v27 = *(unsigned int *)(v36 + 14976);
          *(_DWORD *)(v36 + 14976) = v27 + 1;
          *(_QWORD *)(v14 + 8 * v27 + 14848) = v13;
        }
        else
        {
          v15 = *((void ***)v35 + 66);
          v16 = &v15[8 * (unsigned __int64)*((unsigned int *)v35 + 134)];
          if ( v15 != v16 )
          {
            do
            {
              while ( 1 )
              {
                v16 -= 8;
                v17 = (void **)v16[3];
                if ( v17 == v16 + 5 )
                  break;
                operator delete(v17);
                if ( v15 == v16 )
                  goto LABEL_23;
              }
            }
            while ( v15 != v16 );
LABEL_23:
            v16 = (void **)v13[66];
          }
          if ( v16 != v13 + 68 )
            free(v16);
          v18 = (void **)v13[52];
          if ( v18 != v13 + 54 )
            free(v18);
          v19 = v13 + 48;
          v20 = v13 + 8;
          do
          {
            while ( *v19 != v19 + 2 )
            {
              operator delete(*v19);
              v19 -= 4;
              if ( v19 == v20 )
                goto LABEL_31;
            }
            v19 -= 4;
          }
          while ( v19 != v20 );
LABEL_31:
          operator delete(v13, 0x3A0u);
        }
      }
    }
  }
  else if ( v5 )
  {
    if ( v5 == 1 )
    {
      v7 = *(unsigned int *)(a3 + 8);
      if ( v7 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        sub_2237220(a3, a3 + 16, v7 + 1, 8);
        v7 = *(unsigned int *)(a3 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a3 + 8 * v7) = "-lstdc++";
      ++*(_DWORD *)(a3 + 8);
    }
  }
  else
  {
    v21 = *(unsigned int *)(a3 + 8);
    if ( v21 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, v21 + 1, 8);
      v21 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v21) = "-lc++";
    ++*(_DWORD *)(a3 + 8);
    v22 = sub_10DCD30(a2, 0x29Fu) == 0;
    v23 = *(unsigned int *)(a3 + 8);
    if ( !v22 )
    {
      if ( v23 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        sub_2237220(a3, a3 + 16, v23 + 1, 8);
        v23 = *(unsigned int *)(a3 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a3 + 8 * v23) = "-lc++experimental";
      v23 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
      *(_DWORD *)(a3 + 8) = v23;
    }
    if ( v23 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, v23 + 1, 8);
      v23 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v23) = "-lc++abi";
    v24 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    *(_DWORD *)(a3 + 8) = v24;
    if ( v6 )
    {
      if ( v24 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        sub_2237220(a3, a3 + 16, v24 + 1, 8);
        v24 = *(unsigned int *)(a3 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a3 + 8 * v24) = "-lunwind";
      ++*(_DWORD *)(a3 + 8);
    }
  }
}
