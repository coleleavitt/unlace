__int64 __fastcall sub_21A9260(__int64 a1, int a2, void *a3, unsigned __int64 a4)
{
  int *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rax
  int *v8; // r14
  int v9; // r15d
  int v10; // eax
  __int64 v11; // rdx
  unsigned int v12; // ebx
  int v14; // [rsp+Ch] [rbp-BCh]
  __int128 v15; // [rsp+10h] [rbp-B8h] BYREF
  int v16; // [rsp+20h] [rbp-A8h]
  void *ptr; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-90h]
  int v19; // [rsp+40h] [rbp-88h] BYREF
  int v20; // [rsp+44h] [rbp-84h]

  switch ( a2 )
  {
    case 0:
      ptr = a3;
      v18 = a4;
      v20 = 0;
      LODWORD(v15) = 14;
      sub_FDFDB0((__int64)&ptr, (int *)&v15, "dylink", 6);
      LODWORD(v15) = 14;
      sub_FDFDB0((__int64)&ptr, (int *)&v15, "dylink.0", 8);
      LODWORD(v15) = 15;
      sub_FDFDB0((__int64)&ptr, (int *)&v15, "linking", 7);
      if ( !(_BYTE)v20 && v18 > 5 && *(_DWORD *)ptr == 1869374834 && *((_WORD *)ptr + 2) == 11875 )
      {
        v19 = 16;
        LOBYTE(v20) = 1;
      }
      LODWORD(v15) = 17;
      sub_FDFDB0((__int64)&ptr, (int *)&v15, "name", 4);
      LODWORD(v15) = 18;
      sub_FDFDB0((__int64)&ptr, (int *)&v15, "producers", 9);
      LODWORD(v15) = 19;
      sub_FDFDB0((__int64)&ptr, (int *)&v15, "target_features", 15);
      v12 = (unsigned __int8)v20;
      if ( !(_BYTE)v20 )
        return 1;
      v14 = v19;
      if ( v19 )
        goto LABEL_3;
      return v12;
    case 1:
      v14 = 1;
      goto LABEL_3;
    case 2:
      v14 = 2;
      goto LABEL_3;
    case 3:
      v14 = 3;
      goto LABEL_3;
    case 4:
      v14 = 4;
      goto LABEL_3;
    case 5:
      v14 = 5;
      goto LABEL_3;
    case 6:
      v14 = 7;
      goto LABEL_3;
    case 7:
      v14 = 8;
      goto LABEL_3;
    case 8:
      v14 = 9;
      goto LABEL_3;
    case 9:
      v14 = 10;
      goto LABEL_3;
    case 10:
      v14 = 12;
      goto LABEL_3;
    case 11:
      v14 = 13;
      goto LABEL_3;
    case 12:
      v14 = 11;
      goto LABEL_3;
    case 13:
      v14 = 6;
LABEL_3:
      v5 = &v19;
      v16 = 0;
      v6 = v14;
      ptr = &v19;
      v18 = 0x1400000000LL;
      v7 = 0;
      v15 = 0;
      break;
    default:
      return 1;
  }
  while ( 1 )
  {
    v8 = (int *)((char *)&unk_2C8EF60 + 80 * v6);
    v9 = *v8;
    if ( *v8 )
    {
      do
      {
        if ( !*((_BYTE *)&v15 + v9) )
        {
          if ( v7 + 1 > (unsigned __int64)HIDWORD(v18) )
          {
            sub_2237220(&ptr, &v19, v7 + 1, 4);
            v7 = (unsigned int)v18;
          }
          *((_DWORD *)ptr + v7) = v9;
          v10 = v18;
          *((_BYTE *)&v15 + v9) = 1;
          v7 = (unsigned int)(v10 + 1);
          LODWORD(v18) = v7;
        }
        v9 = *++v8;
      }
      while ( *v8 );
      v5 = (int *)ptr;
    }
    if ( !(_DWORD)v7 )
      break;
    v11 = (unsigned int)v7;
    v7 = (unsigned int)(v7 - 1);
    v6 = v5[v11 - 1];
    LODWORD(v18) = v7;
    if ( *(_BYTE *)(a1 + v6) )
    {
      v12 = 0;
      goto LABEL_14;
    }
  }
  v12 = 1;
  *(_BYTE *)(a1 + v14) = 1;
LABEL_14:
  if ( v5 != &v19 )
    free(v5);
  return v12;
}
