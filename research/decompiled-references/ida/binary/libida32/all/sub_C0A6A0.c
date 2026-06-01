__int64 __fastcall sub_C0A6A0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  unsigned int v8; // r12d
  _QWORD *v10; // rsi
  __int64 v11; // rbx
  int v12; // r14d
  __int64 v13; // rax
  __int64 v14; // r13
  void **v15; // rax
  __int64 v16; // r9
  __int64 v17; // r12
  __int64 v18; // rbx
  unsigned int v19; // eax
  void **i; // r12
  void **v21; // rdi
  void **v22; // rbx
  unsigned __int8 v27; // [rsp+28h] [rbp-250h]
  _QWORD v29[3]; // [rsp+40h] [rbp-238h] BYREF
  char v30; // [rsp+58h] [rbp-220h]
  __int64 v31; // [rsp+68h] [rbp-210h]
  void *v32; // [rsp+70h] [rbp-208h]
  __int64 v33; // [rsp+78h] [rbp-200h]
  _BYTE v34[80]; // [rsp+80h] [rbp-1F8h] BYREF
  __int64 v35; // [rsp+D0h] [rbp-1A8h] BYREF
  void *v36[3]; // [rsp+D8h] [rbp-1A0h] BYREF
  __int64 v37; // [rsp+F0h] [rbp-188h]
  __int64 v38; // [rsp+F8h] [rbp-180h] BYREF
  void *v39[2]; // [rsp+178h] [rbp-100h] BYREF
  int v40; // [rsp+188h] [rbp-F0h]
  char v41; // [rsp+18Ch] [rbp-ECh]
  _QWORD v42[5]; // [rsp+190h] [rbp-E8h] BYREF
  void *ptr; // [rsp+1B8h] [rbp-C0h]
  __int64 v44; // [rsp+1C0h] [rbp-B8h]
  _DWORD v45[26]; // [rsp+1C8h] [rbp-B0h] BYREF
  __int64 v46; // [rsp+230h] [rbp-48h]
  __int16 v47; // [rsp+238h] [rbp-40h]
  char v48; // [rsp+23Ah] [rbp-3Eh]

  v8 = sub_A2D380(a3);
  if ( !(_BYTE)v8 )
  {
    v10 = *(_QWORD **)(a1 + 16);
    memset(v29, 0, sizeof(v29));
    v32 = v34;
    v33 = 0x800000000LL;
    v30 |= 1u;
    v31 = 0;
    v34[65] = 0;
    sub_C00890((__int64)v29, v10, a3);
    v11 = sub_F43FF0(*(_QWORD *)(*a4 & 0xFFFFFFFFFFFFFFF0LL));
    if ( a5 == 1 )
    {
LABEL_28:
      v8 = 1;
      sub_BEBB50((__int64)v29, a3);
    }
    else
    {
      v12 = 1;
      v13 = 1;
      while ( 1 )
      {
        v14 = sub_F43FF0(*(_QWORD *)(a4[v13] & 0xFFFFFFFFFFFFFFF0LL));
        if ( v14 != v11 )
        {
          v35 = 0;
          v15 = (void **)&v38;
          v36[1] = v36;
          v36[0] = v36;
          v36[2] = nullptr;
          v37 = 1;
          do
          {
            *v15 = nullptr;
            v15 += 2;
          }
          while ( v39 != v15 );
          v39[1] = &byte_4;
          v39[0] = v42;
          ptr = v45;
          v44 = 0x400000000LL;
          v40 = 0;
          v41 = 1;
          v42[4] = 0;
          v45[24] = 0;
          v46 = 0;
          v47 = 256;
          v48 = 0;
          sub_B4C7F0(v11, v14, (__int64)&v35);
          v16 = *((_QWORD *)v36[0] + 2);
          v17 = v16 + 24LL * *((unsigned int *)v36[0] + 6);
          if ( v16 == v17 )
          {
LABEL_31:
            v8 = 1;
          }
          else
          {
            v18 = *((_QWORD *)v36[0] + 2);
            while ( 1 )
            {
              v19 = sub_C0A1C0(a1, a2, (__int64)v29, *(_QWORD *)(v18 + 8), *(_QWORD *)v18);
              if ( !(_BYTE)v19 )
                break;
              v18 += 24;
              if ( v17 == v18 )
                goto LABEL_31;
            }
            v8 = v19;
          }
          if ( ptr != v45 )
            free(ptr);
          if ( !v41 )
            free(v39[0]);
          if ( (v37 & 1) == 0 )
            operator delete();
          if ( v36[0] != v36 )
          {
            v27 = v8;
            for ( i = (void **)v36[0]; ; i = v22 )
            {
              v21 = (void **)i[2];
              v22 = (void **)*i;
              if ( v21 == i + 4 )
              {
                operator delete(i);
                if ( v22 == v36 )
                {
LABEL_25:
                  v8 = v27;
                  break;
                }
              }
              else
              {
                free(v21);
                operator delete(i);
                if ( v22 == v36 )
                  goto LABEL_25;
              }
            }
          }
          if ( !(_BYTE)v8 )
            break;
        }
        v11 = v14;
        v13 = (unsigned int)++v12;
        if ( v12 == a5 )
          goto LABEL_28;
      }
    }
    if ( v32 != v34 )
      free(v32);
  }
  return v8;
}

