void __fastcall sub_24EA30(__int64 a1, unsigned int a2, const char *a3)
{
  _BYTE *v4; // rax
  size_t v6; // rax
  char *v7; // r10
  size_t v8; // r13
  size_t v9; // r15
  __int64 v10; // r15
  unsigned __int64 v11; // rdi
  void *v12; // rdi
  char *v13; // [rsp+8h] [rbp-40h]

  *(_DWORD *)(a1 + 1520) = a2;
  if ( a2 )
  {
    v4 = *(_BYTE **)(a1 + 1536);
    *(_QWORD *)(a1 + 1544) = 0;
    *v4 = 0;
    if ( !a3 )
      goto LABEL_12;
    v6 = strlen(a3);
    v7 = *(char **)(a1 + 1536);
    v8 = v6;
    if ( v7 == (char *)(a1 + 1552) )
    {
      if ( v6 <= 0xF )
        goto LABEL_5;
      if ( v6 > 0x1D )
      {
        v10 = v6;
        v7 = (char *)operator new(v6 + 1);
      }
      else
      {
        v10 = 30;
        v7 = (char *)operator new(0x1Fu);
      }
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 1552);
      if ( v9 >= v6 )
      {
LABEL_5:
        if ( a3 >= v7 && &v7[*(_QWORD *)(a1 + 1544)] >= a3 )
        {
          std::string::_M_replace_cold();
          v7 = *(char **)(a1 + 1536);
        }
        else if ( v6 )
        {
          if ( v6 == 1 )
            *v7 = *a3;
          else
            memcpy(*(void **)(a1 + 1536), a3, v6);
          v7 = *(char **)(a1 + 1536);
        }
LABEL_11:
        *(_QWORD *)(a1 + 1544) = v8;
        v7[v8] = 0;
LABEL_12:
        if ( *(_QWORD *)(a1 + 1528) )
        {
          sub_2BC170();
          (*(void (__fastcall **)(__int64, _QWORD))(a1 + 1528))(a1, a2);
        }
        return;
      }
      v10 = 2 * v9;
      if ( v6 < v10 )
      {
        v11 = v10 + 1;
        if ( v10 < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v11 = v6 + 1;
        v10 = v6;
      }
      v7 = (char *)operator new(v11);
      if ( v8 == 1 )
      {
        *v7 = *a3;
        goto LABEL_19;
      }
    }
    v7 = (char *)memcpy(v7, a3, v8);
LABEL_19:
    v12 = *(void **)(a1 + 1536);
    if ( (void *)(a1 + 1552) != v12 )
    {
      v13 = v7;
      operator delete(v12, *(_QWORD *)(a1 + 1552) + 1LL);
      v7 = v13;
    }
    *(_QWORD *)(a1 + 1536) = v7;
    *(_QWORD *)(a1 + 1552) = v10;
    goto LABEL_11;
  }
}

