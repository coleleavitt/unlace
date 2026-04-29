__int64 __fastcall sub_2C53E0(__int64 a1, double a2, __int64 a3, char a4, __int64 a5, __int64 *a6)
{
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 *v10; // rax
  __int64 v11; // r13
  _QWORD *v12; // rbp
  _QWORD *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rsi
  _UNKNOWN **v16; // rbp
  _UNKNOWN **v17; // r13
  __int64 v18; // rdi
  __int64 v19; // rbp
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v23; // rdi
  unsigned int v24; // r9d
  unsigned int v25; // r8d
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 *v28; // rbx
  _QWORD *v29; // rax
  __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 module_data; // rax
  __int64 v35; // [rsp+8h] [rbp-B0h]
  unsigned int v36; // [rsp+10h] [rbp-A8h]
  unsigned int v37; // [rsp+14h] [rbp-A4h]
  __int64 v38; // [rsp+18h] [rbp-A0h]
  __int64 v39[2]; // [rsp+20h] [rbp-98h] BYREF
  char v40; // [rsp+30h] [rbp-88h]
  _UNKNOWN ***v41; // [rsp+38h] [rbp-80h]
  _UNKNOWN **v42; // [rsp+40h] [rbp-78h] BYREF
  __int128 v43; // [rsp+48h] [rbp-70h]
  __int64 *v44; // [rsp+58h] [rbp-60h] BYREF
  __int128 v45; // [rsp+60h] [rbp-58h]
  int v46; // [rsp+70h] [rbp-48h]
  unsigned __int64 v47; // [rsp+78h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  switch ( a4 )
  {
    case 'g':
      switch_dbctx();
      v23 = *(_QWORD *)(a1 + 48);
      v24 = *(_DWORD *)(a1 + 40);
      v25 = *(_DWORD *)(a1 + 44);
      v26 = *(_QWORD *)(a1 + 32);
      v27 = *(_QWORD *)(a1 + 56);
      if ( !v23 )
      {
        v38 = *(_QWORD *)(a1 + 56);
        v37 = *(_DWORD *)(a1 + 40);
        v36 = *(_DWORD *)(a1 + 44);
        v35 = *(_QWORD *)(a1 + 32);
        switch_dbctx();
        module_data = get_module_data();
        v27 = v38;
        v24 = v37;
        *(_QWORD *)(a1 + 48) = module_data;
        v25 = v36;
        v23 = module_data;
        v26 = v35;
      }
      sub_2C50D0(v23, a6, v27, v26, v25, v24);
      break;
    case 'v':
      switch_dbctx();
      v14 = *(_QWORD *)(a1 + 56);
      v15 = *(_QWORD *)(a1 + 48);
      v42 = nullptr;
      v39[1] = v14;
      v44 = nullptr;
      v46 = 1;
      v40 = 118;
      v39[0] = (__int64)&off_4E11B8;
      v41 = &v42;
      v43 = 0;
      v45 = 0;
      if ( !v15 )
      {
        switch_dbctx();
        v33 = get_module_data();
        *(_QWORD *)(a1 + 48) = v33;
        v15 = v33;
      }
      if ( sub_2B6330(v39, v15, a6, 0.0) )
      {
        v16 = v42;
        v17 = &v42[12 * v43];
        if ( v17 != v42 )
        {
          do
          {
            (*(void (__fastcall **)(_QWORD, _UNKNOWN **, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 32) + 32LL))(
              *(_QWORD *)(a1 + 32),
              v16 + 6,
              *(unsigned int *)(a1 + 44),
              *(unsigned int *)(a1 + 40),
              1);
            v16 += 12;
          }
          while ( v16 != v17 );
        }
        sub_2B64B0(v39, a6);
      }
      sub_217B60((__int64 *)&v44);
      v18 = (__int64)v42;
      if ( v42 )
      {
        v19 = v43;
        if ( (_QWORD)v43 )
        {
          v20 = 0;
          do
          {
            v21 = 3 * v20++;
            sub_2B9980((_QWORD *)(32 * v21 + v18));
            v18 = (__int64)v42;
          }
          while ( v19 != v20 );
        }
        *(_QWORD *)&v43 = 0;
        qfree(v18);
      }
      break;
    case 'd':
      switch_dbctx();
      v8 = *(_QWORD *)(a1 + 56);
      v9 = *(_QWORD *)(a1 + 48);
      BYTE8(v43) = 100;
      v44 = nullptr;
      *(_QWORD *)&v43 = v8;
      v42 = &off_4E1118;
      if ( !v9 )
      {
        switch_dbctx();
        v32 = get_module_data();
        *(_QWORD *)(a1 + 48) = v32;
        v9 = v32;
      }
      v10 = (__int64 *)sub_2B6330(&v42, v9, a6, a2);
      v44 = v10;
      if ( v10 )
      {
        v11 = *v10;
        if ( *v10 && v10[1] )
        {
          v12 = *(_QWORD **)(v11 + 8);
LABEL_10:
          while ( (_QWORD *)v11 != v12 )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 32) + 32LL))(
              *(_QWORD *)(a1 + 32),
              v12 + 7,
              *(unsigned int *)(a1 + 44),
              *(unsigned int *)(a1 + 40),
              1);
            if ( (*v12 & 2) == 0 )
            {
              v13 = (_QWORD *)v12[2];
              if ( (*(_BYTE *)v13 & 2) != 0 )
              {
                v29 = (_QWORD *)(*v12 & 0xFFFFFFFFFFFFFFFCLL);
                v30 = *v29;
                if ( (*v29 & 2) == 0 )
                {
                  while ( v12 == (_QWORD *)v29[2] )
                  {
                    v12 = v29;
                    v31 = v30 & 0xFFFFFFFFFFFFFFFCLL;
                    v30 = *(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v30 & 2) != 0 )
                    {
                      v12 = (_QWORD *)v31;
                      goto LABEL_10;
                    }
                    v29 = (_QWORD *)v31;
                  }
                }
                v12 = v29;
              }
              else
              {
                do
                {
                  v12 = v13;
                  v13 = (_QWORD *)v13[1];
                }
                while ( (*(_BYTE *)v13 & 2) == 0 );
              }
            }
          }
        }
        sub_2B64B0((__int64 *)&v42, a6);
        v28 = v44;
        if ( v44 )
        {
          sub_2BC560(v44);
          qfree((__int64)v28);
        }
      }
      break;
  }
  return 1;
}
