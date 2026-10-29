__int64 __fastcall sub_D24C10(__int64 a1, int a2, unsigned int a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // r13
  unsigned __int64 v9; // r12
  int v10; // eax
  __int64 v11; // rdi
  unsigned __int64 v12; // r12
  __int64 v13; // rdi
  __int64 v14; // rdi
  unsigned __int64 v15; // r12
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // r12
  unsigned int v19; // r13d
  int v20; // eax
  __int64 v21; // rdi
  unsigned int v22; // r13d
  __int64 v23; // rdi
  void *v24; // r13
  __int64 v25; // rdi
  void *v26; // r13
  unsigned __int8 v27; // [rsp+Fh] [rbp-89h]
  char v28; // [rsp+1Bh] [rbp-7Dh] BYREF
  int v29; // [rsp+1Ch] [rbp-7Ch] BYREF
  void *v30; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v31; // [rsp+28h] [rbp-70h]
  char v32; // [rsp+2Ch] [rbp-6Ch]
  void *v33; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v34; // [rsp+38h] [rbp-60h]
  char v35; // [rsp+3Ch] [rbp-5Ch]
  int v36; // [rsp+40h] [rbp-58h]
  void *v37; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v38; // [rsp+58h] [rbp-40h]
  char v39; // [rsp+5Ch] [rbp-3Ch]
  int v40; // [rsp+60h] [rbp-38h]

  switch ( a2 )
  {
    case 0:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v11 = *(_QWORD *)(a1 + 560);
        v8 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v12 = (unsigned __int8)sub_D22760(v11);
        v10 = sub_21EDE80(a3);
        v31 = 8;
        v30 = (void *)v12;
        v32 = 0;
        goto LABEL_15;
      }
      break;
    case 1:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v13 = *(_QWORD *)(a1 + 560);
        v8 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v9 = (unsigned __int8)sub_D22E60(v13);
        v10 = sub_21EDE80(a3);
        v31 = 8;
        goto LABEL_14;
      }
      break;
    case 2:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v14 = *(_QWORD *)(a1 + 560);
        v8 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v15 = (unsigned __int16)sub_D23370(v14);
        v10 = sub_21EDE80(a3);
        v31 = 16;
        v30 = (void *)v15;
        v32 = 0;
        goto LABEL_15;
      }
      break;
    case 3:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v16 = *(_QWORD *)(a1 + 560);
        v8 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v9 = (unsigned __int16)sub_D23A90(v16);
        v10 = sub_21EDE80(a3);
        v31 = 16;
        goto LABEL_14;
      }
      break;
    case 4:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v17 = *(_QWORD *)(a1 + 560);
        v18 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v19 = sub_D23BA0(v17);
        v20 = sub_21EDE80(a3);
        v32 = 0;
        v31 = 32;
        v30 = (void *)v19;
        goto LABEL_28;
      }
      break;
    case 5:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v21 = *(_QWORD *)(a1 + 560);
        v18 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v22 = sub_D242B0(v21);
        v20 = sub_21EDE80(a3);
        v31 = 32;
        v30 = (void *)v22;
        goto LABEL_25;
      }
      break;
    case 6:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v23 = *(_QWORD *)(a1 + 560);
        v18 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v24 = (void *)sub_D243C0(v23);
        v20 = sub_21EDE80(a3);
        v31 = 64;
        v30 = v24;
        v32 = 0;
        goto LABEL_28;
      }
      break;
    case 7:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v25 = *(_QWORD *)(a1 + 560);
        v18 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v26 = (void *)sub_D24B00(v25);
        v20 = sub_21EDE80(a3);
        v31 = 64;
        v30 = v26;
LABEL_25:
        v32 = 1;
LABEL_28:
        v29 = v20;
        sub_21F6EE0(&v37, &v30, &v29, &v28);
        v34 = v38;
        v33 = v37;
        v35 = v39;
        v36 = v40;
        if ( v31 > 0x40 && v30 )
          operator delete[](v30);
        if ( v28 )
        {
          result = sub_DF81A0(a1 + 384, v18, &v33);
          if ( !(_BYTE)result )
            goto LABEL_34;
        }
        goto LABEL_33;
      }
      break;
    case 8:
    case 9:
    case 10:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v7 = *(_QWORD *)(a1 + 560);
        v8 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v9 = (unsigned __int8)sub_D08FE0(v7);
        v10 = sub_21EDE80(a3);
        v31 = 1;
LABEL_14:
        v30 = (void *)v9;
        v32 = 1;
LABEL_15:
        v29 = v10;
        sub_21F6EE0(&v37, &v30, &v29, &v28);
        v34 = v38;
        v33 = v37;
        v35 = v39;
        v36 = v40;
        if ( v31 > 0x40 && v30 )
          operator delete[](v30);
        if ( !v28 || (result = sub_DF81A0(a1 + 384, v8, &v33), (_BYTE)result) )
        {
LABEL_33:
          sub_D0BA90(*(_QWORD *)(a1 + 560), (__int64)&v33);
          result = 1;
        }
LABEL_34:
        if ( v34 > 0x40 )
        {
          if ( v33 )
          {
            v27 = result;
            operator delete[](v33);
            result = v27;
          }
        }
      }
      break;
  }
  return result;
}
