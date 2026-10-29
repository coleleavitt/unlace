/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_546D8
// Address: 0x00000000000546D8

//----- (00000000000546D8) ----------------------------------------------------
__int64 __fastcall sub_546D8(
        pthread_mutex_t *a1,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int *a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int8 *v8; // x8
  unsigned __int8 *v9; // x9
  int v10; // w10
  pthread_mutex_t *v12; // x20
  int v13; // w11
  unsigned int v15; // w8
  unsigned int v16; // w22
  void *v18; // x0
  int v20; // w10
  int v21; // w9
  unsigned int v22; // w10
  __int64 v23; // x8
  __int64 v24; // x9
  __int64 v25; // x10
  unsigned int v26; // w9
  pthread_mutex_t v27; // [xsp+0h] [xbp-70h] BYREF
  pthread_mutex_t v28; // [xsp+28h] [xbp-48h] BYREF

  *(&v28.__align + 2) = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v8 = (unsigned __int8 *)*a2;
  if ( *a2 >= a3 )
    return 0;
  v9 = v8 + 1;
  *(&v27.__align + 1) = (__int64)(v8 + 1);
  memset(&v27.__align + 2, 0, 24);
  v10 = *v8;
  v12 = a1;
  v13 = v10 & 0xC0;
  switch ( v13 )
  {
    case 192:
      v28.__size[12] = -64;
      v28.__lock = v10 & 0x3F;
      goto LABEL_11;
    case 128:
      v28.__size[12] = 0x80;
      v28.__lock = v10 & 0x3F;
      if ( (unpack_xleb128((pthread_mutex_t *)((char *)&v28.__align + 4), 32, 0, (_BYTE **)&v27.__align + 1, a3) & 1) != 0 )
      {
        v28.__owner = *(_DWORD *)(a4 + 88) * v28.__count;
        goto LABEL_11;
      }
      goto LABEL_17;
    case 64:
      v28.__size[12] = 64;
      v28.__lock = v10 & 0x3F;
      if ( a6 )
      {
        v15 = *a6 + (v10 & 0x3F);
        *a6 = v15;
        v28.__count = v15;
        goto LABEL_11;
      }
LABEL_17:
      v16 = 0;
      v18 = (void *)*(&v27.__align + 2);
      if ( !*(&v27.__align + 2) )
        return v16;
LABEL_18:
      v27.__list.__prev = nullptr;
      qfree(v18);
      *(&v27.__align + 2) = 0;
      v27.__list.__next = nullptr;
      return v16;
  }
  v16 = 0;
  v28.__size[12] = *v8;
  switch ( v10 )
  {
    case 0:
    case 10:
    case 11:
    case 28:
      break;
    case 2:
      v21 = *v9;
      v28.__lock = v21;
      if ( !a6 )
      {
        if ( !under_debugger )
        {
          a1 = interr(20142);
LABEL_40:
          if ( !under_debugger )
          {
            a1 = interr(20142);
LABEL_42:
            if ( !under_debugger )
              a1 = interr(20142);
          }
        }
        __break(1u);
        Unwind_Resume(a1, (__int64)a2, a3, a4, a5, (__int64)a6, a7, a8, v27.__size[0]);
      }
      v22 = *a6;
      v23 = (__int64)(v8 + 2);
      goto LABEL_36;
    case 3:
      v24 = 1;
      if ( (a5 & 1) != 0 )
        v25 = 2;
      else
        v25 = 1;
      if ( (a5 & 1) == 0 )
        v24 = 2;
      v21 = v8[v25] | (v8[v24] << 8);
      v28.__lock = v21;
      if ( !a6 )
        goto LABEL_40;
      v22 = *a6;
      v23 = (__int64)(v8 + 3);
      goto LABEL_36;
    case 4:
      if ( (a5 & 1) != 0 )
      {
        v20 = (v8[1] << 24) | (v8[2] << 16) | (v8[3] << 8);
        v9 = v8 + 4;
      }
      else
      {
        v20 = (v8[4] << 24) | (v8[3] << 16) | (v8[2] << 8);
      }
      v21 = v20 | *v9;
      v28.__lock = v21;
      if ( !a6 )
        goto LABEL_42;
      v22 = *a6;
      v23 = (__int64)(v8 + 5);
LABEL_36:
      v26 = v22 + v21;
      *a6 = v26;
      v28.__count = v26;
      goto LABEL_37;
    case 5:
    case 9:
    case 12:
    case 20:
      if ( (unpack_xleb128((pthread_mutex_t *)((char *)&v28.__align + 4), 32, 0, (_BYTE **)&v27.__align + 1, a3) & 1) != 0 )
        goto LABEL_16;
      goto LABEL_17;
    case 6:
    case 7:
    case 8:
    case 13:
    case 14:
    case 46:
LABEL_16:
      if ( (unpack_xleb128(&v28, 32, 0, (_BYTE **)&v27.__align + 1, a3) & 1) == 0 )
        goto LABEL_17;
      break;
    case 15:
      if ( (unpack_xleb128(&v27, 64, 0, (_BYTE **)&v27.__align + 1, a3) & 1) == 0 )
        goto LABEL_17;
      sub_545E8((pthread_mutex_t *)(&v27.__align + 2), *((void **)&v27.__align + 1), v27.__align);
      v23 = *(&v27.__align + 1) + v27.__align;
LABEL_37:
      *(&v27.__align + 1) = v23;
      break;
    default:
      goto LABEL_12;
  }
LABEL_11:
  sub_5AD2C(v12, (__int64)(&v27.__align + 2));
  v16 = 1;
  *a2 = *(&v27.__align + 1);
LABEL_12:
  v18 = (void *)*(&v27.__align + 2);
  if ( *(&v27.__align + 2) )
    goto LABEL_18;
  return v16;
}
// 549F4: conditional instruction was optimized away because %ptr.8==0
// 54A0C: variable 'a2' is possibly undefined
// 54A0C: variable 'a3' is possibly undefined
// 54A0C: variable 'a4' is possibly undefined
// 54A0C: variable 'a5' is possibly undefined
// 54A0C: variable 'a6' is possibly undefined
// 54A0C: variable 'a7' is possibly undefined
// 54A0C: variable 'a8' is possibly undefined
// 168DF0: using guessed type char under_debugger;
