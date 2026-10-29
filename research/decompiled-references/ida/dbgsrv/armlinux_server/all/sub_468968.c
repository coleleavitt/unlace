/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_468968
// Address: 0x0000000000468968

//----- (0000000000468968) ----------------------------------------------------
__int64 __fastcall sub_468968(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // x1
  int v6; // w26
  char *v7; // x19
  __int64 v8; // x21
  char *v9; // x23
  unsigned __int8 *v10; // x2
  unsigned __int8 *v11; // x22
  unsigned __int8 *v12; // x0
  __int64 v14; // x0
  unsigned int v15; // w19
  char *v16; // x1
  char *v17; // x0
  __int64 v18; // x22
  __int64 v19; // x21
  __int64 v20; // x20
  char *v21; // x19
  void *v22; // x0
  void *v23; // x0
  size_t v25; // x0
  size_t v26; // x24
  unsigned __int64 v27; // x27
  void *v28; // x0
  int v29; // w0
  unsigned __int64 v30; // x1
  unsigned __int8 *v31; // x3
  int v32; // w22
  unsigned __int8 *v33; // x3
  unsigned __int64 v34; // x0
  unsigned __int8 *v35; // x2
  void *v36; // x0
  __int64 v38; // x0
  __int64 *v39; // x2
  unsigned int v41; // [xsp+74h] [xbp-3Ch] BYREF
  void *v42; // [xsp+78h] [xbp-38h] BYREF
  __int64 v43; // [xsp+80h] [xbp-30h]
  __int64 v44; // [xsp+88h] [xbp-28h]
  void *ptr; // [xsp+90h] [xbp-20h] BYREF
  __int64 v46; // [xsp+98h] [xbp-18h]
  __int64 v47; // [xsp+A0h] [xbp-10h]
  __int64 v48; // [xsp+A8h] [xbp-8h]

  v5 = *(_QWORD *)(a3 + 8);
  v42 = nullptr;
  v43 = 0;
  v44 = 0;
  v6 = sub_48E5A8((unsigned __int8 **)a3, v5);
  sub_467CE0(&v42, v6);
  v7 = (char *)v42;
  if ( v6 > 0 )
  {
    v8 = 0;
    v9 = (char *)v42 + 432 * (unsigned int)(v6 - 1) + 432;
    while ( 1 )
    {
      v7[424] = 0;
      v8 = sub_48E6E8((unsigned __int8 **)a3, *(_QWORD *)(a3 + 8)) + v8 - 1;
      *(_QWORD *)v7 = v8;
      v11 = *(unsigned __int8 **)a3;
      v10 = *(unsigned __int8 **)(a3 + 8);
      if ( (unsigned __int64)v10 > *(_QWORD *)a3 )
      {
        v12 = v11 + 1;
        if ( *v11 )
        {
          while ( v10 != v12 )
          {
            if ( !*v12++ )
              goto LABEL_29;
          }
        }
        else
        {
LABEL_29:
          *(_QWORD *)a3 = v12;
          if ( v11 )
          {
            v25 = strlen((const char *)v11);
            v26 = v25;
            if ( v25 )
            {
              v27 = v25 + 1;
              v28 = *((void **)v7 + 1);
              if ( v27 > *((_QWORD *)v7 + 3) )
              {
                v28 = sub_491288((__int64)(v7 + 8), *((void **)v7 + 1), v27, 1u);
                *((_QWORD *)v7 + 1) = v28;
              }
              *((_QWORD *)v7 + 2) = v27;
              memmove(v28, v11, v26);
              *(_BYTE *)(*((_QWORD *)v7 + 1) + v26) = 0;
              if ( *((_QWORD *)v7 + 2) > 1u )
              {
                *((_DWORD *)v7 + 107) = 0;
                v29 = sub_48E5A8((unsigned __int8 **)a3, *(_QWORD *)(a3 + 8));
                *((_DWORD *)v7 + 8) = v29;
                if ( v29 != 4 )
                  *((_DWORD *)v7 + 107) = sub_48E5A8((unsigned __int8 **)a3, *(_QWORD *)(a3 + 8));
                v31 = *(unsigned __int8 **)a3;
                v30 = *(_QWORD *)(a3 + 8);
                if ( v30 > *(_QWORD *)a3 )
                {
                  v32 = *v31;
                  v33 = v31 + 1;
                  *(_QWORD *)a3 = v33;
                  if ( v32 )
                  {
                    v34 = *((_QWORD *)v7 + 6);
                    if ( (unsigned __int8)v32 > v34 )
                    {
                      sub_4684E8((__int64)(v7 + 40), (unsigned __int8)v32);
                      v33 = *(unsigned __int8 **)a3;
                      v30 = *(_QWORD *)(a3 + 8);
                    }
                    else if ( (unsigned __int8)v32 < v34 )
                    {
                      *((_QWORD *)v7 + 6) = (unsigned __int8)v32;
                      v33 = *(unsigned __int8 **)a3;
                      v30 = *(_QWORD *)(a3 + 8);
                    }
                    v35 = &v33[(unsigned __int8)v32];
                    v36 = *((void **)v7 + 5);
                    if ( v33 <= v35 && v30 >= (unsigned __int64)v35 )
                    {
                      *(_QWORD *)a3 = v35;
                      memcpy(v36, v33, (unsigned __int8)v32);
                      v30 = *(_QWORD *)(a3 + 8);
                    }
                  }
                }
                v38 = sub_48E6E8((unsigned __int8 **)a3, v30) - 1;
                *((_QWORD *)v7 + 10) = v38;
                if ( v38 != -1 )
                  sub_473900(v7 + 64, a3);
              }
              if ( !*(_BYTE *)(a1 + 184) )
                goto LABEL_9;
              if ( *((_QWORD *)v7 + 2) )
                v39 = *((__int64 **)v7 + 1);
              else
LABEL_53:
                v39 = &qword_4B2D48;
              sub_40A690((int)"update_lowcnd(ea=%a cnd=%s)\n", v8, v39);
              goto LABEL_9;
            }
          }
        }
      }
      *((_QWORD *)v7 + 2) = 0;
      if ( *(_BYTE *)(a1 + 184) )
        goto LABEL_53;
LABEL_9:
      v7 += 432;
      if ( v7 == v9 )
      {
        v7 = (char *)v42;
        break;
      }
    }
  }
  v14 = *(_QWORD *)(a1 + 440);
  ptr = nullptr;
  v46 = 0;
  v47 = 0;
  v15 = (*(__int64 (__fastcall **)(__int64, unsigned int *, char *, _QWORD, void **))(*(_QWORD *)v14 + 352LL))(
          v14,
          &v41,
          v7,
          (unsigned int)v6,
          &ptr);
  if ( *(_BYTE *)(a1 + 184) )
    sub_40A690((int)"  update_lowcnds => %d\n", v15);
  sub_4631C0(a2, v15);
  sub_4631C0(a2, v41);
  if ( v15 != 1 )
  {
    v16 = (char *)&qword_4B2D48;
    if ( v46 )
      v16 = (char *)ptr;
    sub_4632A0(a2, v16);
  }
  if ( ptr )
  {
    v46 = 0;
    j__free(ptr);
  }
  v17 = (char *)v42;
  if ( v42 )
  {
    v18 = v43;
    if ( v43 )
    {
      v19 = 0;
      v20 = 0;
      do
      {
        v21 = &v17[v19];
        v22 = *(void **)&v17[v19 + 40];
        if ( v22 )
        {
          *((_QWORD *)v21 + 6) = 0;
          j__free(v22);
        }
        v23 = *((void **)v21 + 1);
        if ( v23 )
        {
          *((_QWORD *)v21 + 2) = 0;
          j__free(v23);
        }
        ++v20;
        v19 += 432;
        v17 = (char *)v42;
      }
      while ( v18 != v20 );
    }
    v43 = 0;
    j__free(v17);
  }
  return v48 ^ _stack_chk_guard;
}
// 473900: using guessed type __int64 __fastcall sub_473900(_QWORD, _QWORD);
// 4B2D48: using guessed type __int64 qword_4B2D48;
