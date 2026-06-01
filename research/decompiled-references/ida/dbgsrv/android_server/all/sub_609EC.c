/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_609EC
// Address: 0x00000000000609EC

//----- (00000000000609EC) ----------------------------------------------------
__int64 __fastcall sub_609EC(pthread_mutex_t *a1, __int64 a2, __int64 a3, signed __int64 a4)
{
  pthread_mutex_t *v4; // x19
  int v5; // w8
  int owner; // w8
  __int64 align; // x20
  unsigned __int64 v8; // x21
  unsigned __int64 v9; // x8
  char *v10; // x1
  char *v11; // x0
  char *v12; // x2
  unsigned int v14; // w8
  unsigned int v15; // w8
  int v16; // w9
  pthread_mutex_t *v17; // x0
  unsigned __int64 v18; // x1
  int v19; // w9
  __int64 v20; // x20
  __int64 v21; // x8
  _BYTE *v22; // x0
  __int64 v23; // x8
  unsigned __int64 prev; // x9
  pthread_mutex_t *v25; // x19
  pthread_mutex_t *v26; // x0
  _DWORD *v27; // x0
  __int64 v28; // x8
  unsigned __int64 v29; // x10
  pthread_mutex_t *v30; // x0
  struct __pthread_internal_list *v31; // x0
  struct __pthread_internal_list *v32; // x8
  unsigned __int64 next; // x10
  int v34; // w20
  pthread_mutex_t *v35; // x0
  _DWORD *v36; // x0
  char v37; // [xsp+2Ch] [xbp-44h] BYREF
  char v38; // [xsp+30h] [xbp-40h] BYREF
  char v39; // [xsp+34h] [xbp-3Ch] BYREF
  __int64 v40; // [xsp+38h] [xbp-38h]

  v4 = a1;
  v40 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = (unsigned __int8)a1[5].__size[12];
  switch ( a1[5].__size[12] )
  {
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4A:
    case 0x4B:
    case 0x4C:
    case 0x4D:
    case 0x4E:
    case 0x4F:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5A:
    case 0x5B:
    case 0x5C:
    case 0x5D:
    case 0x5E:
    case 0x5F:
      sub_68DCC(
        (pthread_mutex_t *)a1[5].__align,
        (char *)(unsigned int)(a1[5].__owner - 1),
        (void *)(unsigned int)(v5 - 32),
        a4);
      goto LABEL_12;
    case 0x60:
    case 0x61:
    case 0x62:
    case 0x63:
    case 0x64:
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6A:
    case 0x6B:
    case 0x6C:
    case 0x6D:
    case 0x6E:
    case 0x6F:
    case 0x70:
    case 0x71:
    case 0x72:
    case 0x73:
    case 0x74:
    case 0x75:
    case 0x76:
    case 0x77:
    case 0x78:
    case 0x79:
    case 0x7A:
    case 0x7B:
    case 0x7C:
    case 0x7D:
    case 0x7E:
    case 0x7F:
      owner = a1[5].__owner;
      if ( !owner )
        goto LABEL_31;
      align = a1[5].__align;
      v8 = (unsigned int)(owner - 1);
      a1[5].__owner = v8;
      v9 = *(_QWORD *)(align + 8);
      if ( v9 < v8 )
        goto LABEL_5;
      if ( v9 == v8 )
        goto LABEL_11;
      v12 = &v37;
      v37 = 0;
      goto LABEL_10;
    case 0x88:
    case 0x8A:
      v16 = a1[5].__owner;
      v17 = (pthread_mutex_t *)a1[5].__align;
      v18 = (unsigned int)(v16 - 2);
      goto LABEL_23;
    case 0x89:
    case 0x8B:
      v19 = a1[5].__owner;
      v17 = (pthread_mutex_t *)a1[5].__align;
      v18 = (unsigned int)(v19 - 3);
LABEL_23:
      sub_68DCC(v17, (char *)v18, (void *)(unsigned int)(v5 - 4), a4);
      goto LABEL_12;
    case 0x8C:
    case 0x8E:
      v14 = a1[5].__owner;
      if ( v14 <= 1 )
        goto LABEL_31;
      align = a1[5].__align;
      v8 = v14 - 2;
      a1[5].__owner = v8;
      v9 = *(_QWORD *)(align + 8);
      if ( v9 < v8 )
        goto LABEL_5;
      if ( v9 == v8 )
        goto LABEL_11;
      v38 = 0;
      v12 = &v38;
      goto LABEL_10;
    case 0x8D:
    case 0x8F:
      v15 = a1[5].__owner;
      if ( v15 <= 2 )
      {
LABEL_31:
        if ( !under_debugger )
          a1 = interr(708);
        __break(1u);
        v23 = *(&a1[6].__align + 2);
        prev = (unsigned __int64)a1[6].__list.__prev;
        v25 = a1;
        v26 = (pthread_mutex_t *)((char *)a1 + 248);
        if ( prev >= v23 + 1 )
        {
          v27 = (_DWORD *)v26->__align;
        }
        else
        {
          v27 = qvector_reserve(v26, *((void **)&v25[6].__align + 1), v23 + 1, 4u);
          v23 = *(&v25[6].__align + 2);
          *(&v25[6].__align + 1) = (__int64)v27;
        }
        v27[v23] = -1;
        v28 = v25[7].__align;
        v29 = *(&v25[7].__align + 1);
        v30 = (pthread_mutex_t *)((char *)v25 + 272);
        ++*(&v25[6].__align + 2);
        if ( v29 >= v28 + 1 )
        {
          v31 = (struct __pthread_internal_list *)v30->__align;
        }
        else
        {
          v31 = (struct __pthread_internal_list *)qvector_reserve(v30, v25[6].__list.__next, v28 + 1, 4u);
          v28 = v25[7].__align;
          v25[6].__list.__next = v31;
        }
        *((_DWORD *)&v31->__prev + v28) = -1;
        v32 = v25[7].__list.__prev;
        next = (unsigned __int64)v25[7].__list.__next;
        v34 = v25[5].__owner;
        v35 = (pthread_mutex_t *)((char *)v25 + 296);
        ++v25[7].__align;
        if ( next >= (unsigned __int64)&v32->__prev + 1 )
        {
          v36 = (_DWORD *)v35->__align;
        }
        else
        {
          v36 = qvector_reserve(v35, *((void **)&v25[7].__align + 2), (unsigned __int64)&v32->__prev + 1, 4u);
          v32 = v25[7].__list.__prev;
          *(&v25[7].__align + 2) = (__int64)v36;
        }
        v36[(_QWORD)v32] = v34;
        ++v25[7].__list.__prev;
        return 0;
      }
      else
      {
        align = a1[5].__align;
        v8 = v15 - 3;
        a1[5].__owner = v8;
        v9 = *(_QWORD *)(align + 8);
        if ( v9 < v8 )
        {
LABEL_5:
          v10 = *(char **)align;
          if ( *(_QWORD *)(align + 16) < v8 )
          {
            v11 = (char *)qvector_reserve((pthread_mutex_t *)align, v10, v8, 1u);
            v9 = *(_QWORD *)(align + 8);
            v10 = v11;
            *(_QWORD *)align = v11;
          }
          memset(&v10[v9], 0, v8 - v9);
          *(_QWORD *)(align + 8) = v8;
        }
        else if ( v9 != v8 )
        {
          v39 = 0;
          v12 = &v39;
LABEL_10:
          sub_5BBF4((pthread_mutex_t *)align, v8, v12);
        }
LABEL_11:
        v4[5].__size[12] = -87;
LABEL_12:
        v4[5].__size[12] = -87;
        return 0;
      }
    case 0xD9:
      sub_68DCC((pthread_mutex_t *)a1[5].__align, (char *)(unsigned int)(a1[5].__owner - 2), (char *)&qword_D0 + 7, a4);
      goto LABEL_12;
    case 0xDA:
      sub_68DCC((pthread_mutex_t *)a1[5].__align, (char *)(unsigned int)(a1[5].__owner - 3), &qword_D8, a4);
      goto LABEL_12;
    case 0xF3:
      sub_68DCC((pthread_mutex_t *)a1[5].__align, (char *)(unsigned int)(a1[5].__owner - 1), (char *)&qword_F0 + 4, a4);
      goto LABEL_12;
    default:
      v20 = a1[5].__align;
      a1[5].__size[12] = -87;
      v21 = *(_QWORD *)(v20 + 8);
      if ( *(_QWORD *)(v20 + 16) >= (unsigned __int64)(v21 + 1) )
      {
        v22 = *(_BYTE **)v20;
      }
      else
      {
        v22 = qvector_reserve((pthread_mutex_t *)v20, *(void **)v20, v21 + 1, 1u);
        v21 = *(_QWORD *)(v20 + 8);
        *(_QWORD *)v20 = v22;
      }
      v22[v21] = -87;
      ++*(_QWORD *)(v20 + 8);
      ++v4[5].__owner;
      goto LABEL_12;
  }
}
// D0: using guessed type __int64;
// D8: using guessed type __int64;
// F0: using guessed type __int64;
// 168DF0: using guessed type char under_debugger;
