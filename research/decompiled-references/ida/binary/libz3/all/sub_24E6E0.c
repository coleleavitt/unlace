void __fastcall sub_24E6E0(__int64 a1, unsigned int a2, const char *a3)
{
  _BYTE *v4; // rax
  size_t v6; // rax
  char *v7; // r10
  size_t v8; // r12
  size_t v9; // r15
  __int64 v10; // r15
  _BYTE *v11; // r10
  void *v12; // rdi
  unsigned __int64 v13; // rdi
  _BYTE *v14; // [rsp+8h] [rbp-40h]

  v4 = *(_BYTE **)(a1 + 1536);
  *(_QWORD *)(a1 + 1544) = 0;
  *v4 = 0;
  if ( !a3 )
    goto LABEL_10;
  v6 = strlen(a3);
  v7 = *(char **)(a1 + 1536);
  v8 = v6;
  if ( v7 == (char *)(a1 + 1552) )
  {
    if ( v6 <= 0xF )
    {
LABEL_4:
      if ( a3 >= v7 )
      {
        if ( &v7[*(_QWORD *)(a1 + 1544)] >= a3 )
        {
          std::string::_M_replace_cold();
          v7 = *(char **)(a1 + 1536);
        }
        else if ( v6 )
        {
          goto LABEL_6;
        }
      }
      else if ( v6 )
      {
LABEL_6:
        if ( v6 == 1 )
          *v7 = *a3;
        else
          memcpy(*(void **)(a1 + 1536), a3, v6);
        v7 = *(char **)(a1 + 1536);
      }
      *(_QWORD *)(a1 + 1544) = v8;
      v7[v8] = 0;
      goto LABEL_10;
    }
    if ( v6 > 0x1D )
    {
      v10 = v6;
      v11 = (_BYTE *)operator new(v6 + 1);
    }
    else
    {
      v10 = 30;
      v11 = (_BYTE *)operator new(0x1Fu);
    }
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 1552);
    if ( v9 >= v6 )
      goto LABEL_4;
    v10 = 2 * v9;
    if ( v6 < v10 )
    {
      v13 = v10 + 1;
      if ( v10 < 0 )
        std::__throw_bad_alloc();
    }
    else
    {
      v13 = v6 + 1;
      v10 = v6;
    }
    v11 = (_BYTE *)operator new(v13);
    if ( v8 == 1 )
    {
      *v11 = *a3;
      goto LABEL_20;
    }
  }
  v11 = memcpy(v11, a3, v8);
LABEL_20:
  v12 = *(void **)(a1 + 1536);
  if ( (void *)(a1 + 1552) != v12 )
  {
    v14 = v11;
    operator delete(v12, *(_QWORD *)(a1 + 1552) + 1LL);
    v11 = v14;
  }
  *(_QWORD *)(a1 + 1536) = v11;
  *(_QWORD *)(a1 + 1552) = v10;
  *(_QWORD *)(a1 + 1544) = v8;
  v11[v8] = 0;
LABEL_10:
  if ( *(_QWORD *)(a1 + 1528) )
  {
    sub_2BC170();
    (*(void (__fastcall **)(__int64, _QWORD))(a1 + 1528))(a1, a2);
  }
}

