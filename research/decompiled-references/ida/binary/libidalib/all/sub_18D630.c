__int64 __fastcall sub_18D630(__int64 a1, int a2)
{
  size_t v3; // rax
  size_t v4; // r14
  unsigned __int64 v5; // r13
  __int64 v6; // r14
  _BYTE *v7; // rbx
  char v8; // r15
  _BYTE *v9; // r15
  char *v11; // r13
  void *v12; // rdi
  size_t v13; // r13
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int8 v16; // [rsp+8h] [rbp-1098h]
  _BYTE *v17; // [rsp+8h] [rbp-1098h]
  unsigned int v18; // [rsp+1Ch] [rbp-1084h] BYREF
  __int64 v19; // [rsp+20h] [rbp-1080h] BYREF
  __int128 v20; // [rsp+28h] [rbp-1078h]
  __int64 v21; // [rsp+40h] [rbp-1060h] BYREF
  __int128 v22; // [rsp+48h] [rbp-1058h]
  char s[4104]; // [rsp+60h] [rbp-1040h] BYREF
  unsigned __int64 v24; // [rsp+1068h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  v16 = batch;
  if ( !batch )
  {
    switch ( a2 )
    {
      case 4:
        v11 = (char *)a1;
        break;
      case 5:
        v11 = s;
        break;
      case 6:
        v11 = (char *)a1;
        break;
      case 7:
        v11 = s;
        break;
      case 8:
        v11 = s;
        break;
      case 9:
        v11 = (char *)a1;
        break;
      default:
        v11 = (char *)a1;
        break;
    }
    qvsnprintf();
    v20 = 0;
    v19 = 0;
    v18 = 0;
    sub_17CED0(&v19, &v18, s);
    strrpl();
    strrpl();
    strlen(s);
    v21 = 0;
    v22 = 0;
    sub_94440(&v21);
    if ( v11 == (char *)a1 )
    {
      if ( (unsigned int)sub_8F810(v21, a1) != 1 )
        goto LABEL_26;
    }
    else
    {
      qstrncpy();
      if ( (unsigned int)sub_8F810(v21, v11) != 1 )
      {
LABEL_26:
        if ( v21 )
        {
          *(_QWORD *)&v22 = 0;
          qfree();
        }
        if ( v19 )
        {
          *(_QWORD *)&v20 = 0;
          qfree();
        }
        return v16;
      }
      v3 = strlen(s);
      v4 = v3;
      if ( v3 )
      {
        v12 = *(void **)a1;
        v13 = v3 + 1;
        if ( *(_QWORD *)(a1 + 16) < v3 + 1 )
        {
          v14 = qvector_reserve();
          *(_QWORD *)a1 = v14;
          v12 = (void *)v14;
        }
        *(_QWORD *)(a1 + 8) = v13;
        memmove(v12, s, v4);
        *(_BYTE *)(*(_QWORD *)a1 + v4) = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 8) = 0;
      }
    }
    if ( v21 )
    {
      *(_QWORD *)&v22 = 0;
      qfree();
    }
    if ( v19 )
    {
      *(_QWORD *)&v20 = 0;
      qfree();
    }
  }
  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 > 1 )
  {
    v6 = *(_QWORD *)a1;
    v7 = (_BYTE *)(*(_QWORD *)a1 + v5 - 1);
    if ( *(_QWORD *)a1 < (unsigned __int64)v7 )
    {
      while ( (unsigned int)(char)*(v7 - 1) <= 0x7F )
      {
        v8 = *(v7 - 1);
        if ( ((*__ctype_b_loc())[v8] & 0x2000) == 0 )
          break;
        if ( (_BYTE *)v6 == --v7 )
          goto LABEL_21;
      }
    }
    v9 = &v7[-v6];
    if ( v7 == (_BYTE *)v6 )
    {
LABEL_21:
      if ( v6 )
      {
        *(_QWORD *)(a1 + 8) = 0;
        qfree();
        *(_QWORD *)a1 = 0;
        *(_QWORD *)(a1 + 16) = 0;
      }
    }
    else
    {
      v17 = v9 + 1;
      if ( v5 < (unsigned __int64)(v9 + 1) )
      {
        if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v9 + 1) )
        {
          v15 = qvector_reserve();
          v5 = *(_QWORD *)(a1 + 8);
          *(_QWORD *)a1 = v15;
          v6 = v15;
        }
        memset((void *)(v6 + v5), 0, (size_t)&v17[-v5]);
        *(_QWORD *)(a1 + 8) = v17;
        v7 = &v9[*(_QWORD *)a1];
      }
      else if ( (_BYTE *)v5 != v9 + 1 )
      {
        *(_QWORD *)(a1 + 8) = v17;
      }
      *v7 = 0;
    }
  }
  return 1;
}

