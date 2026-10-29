char **__fastcall sub_2198F50(unsigned int *a1, unsigned __int64 a2, _QWORD *a3)
{
  __int64 (*v4)(void); // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r12
  __int64 (__fastcall *v7)(__int64); // rax
  char **result; // rax
  const char *v9; // r12
  size_t v10; // rdi
  size_t v11; // rbx
  char *v12; // rdx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // kr08_8

  v4 = *(__int64 (**)(void))(*(_QWORD *)a1 + 320LL);
  if ( (char *)v4 == (char *)sub_2198DE0 )
  {
    v5 = sub_2198C60((__int64)a1, a2);
    if ( a1[13] == (_DWORD)&loc_1000007 || (v5 & 0x80000000) == 0LL )
    {
      v13 = a1[2];
      v14 = HIDWORD(v5);
      if ( (unsigned int)v13 > 0x14 || (v15 = 1398784, v6 = v14 & 0xF, !_bittest64(&v15, v13)) )
        v6 = (unsigned int)v14 >> 28;
    }
    else
    {
      v6 = BYTE3(v5) & 0xF;
    }
  }
  else
  {
    v6 = v4();
  }
  v7 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 392LL);
  if ( v7 != sub_2195BD0 )
  {
    v16 = v7((__int64)a1);
    switch ( v16 )
    {
      case 0LL:
        goto LABEL_11;
      case 1LL:
        goto LABEL_32;
      case 3LL:
      case 5LL:
        goto LABEL_20;
      case 21LL:
        goto LABEL_38;
      case 37LL:
        goto LABEL_35;
      case 38LL:
        goto LABEL_28;
      default:
        result = (char **)v16;
        goto LABEL_41;
    }
  }
  result = (char **)a1[13];
  if ( (_DWORD)result == (_DWORD)&loc_1000007 )
  {
LABEL_28:
    if ( v6 <= 9 )
    {
      result = off_2BE9860;
      v9 = off_2BE9860[v6];
      if ( !v9 )
        goto LABEL_30;
      goto LABEL_22;
    }
    goto LABEL_11;
  }
  if ( (unsigned int)result <= (unsigned int)&loc_1000007 )
  {
    switch ( (_DWORD)result )
    {
      case 0xC:
LABEL_32:
        if ( v6 <= 9 )
        {
          result = off_2BE9800;
          v9 = off_2BE9800[v6];
          if ( !v9 )
            goto LABEL_30;
          goto LABEL_22;
        }
        break;
      case 0x12:
LABEL_38:
        if ( v6 <= 0xF )
        {
          result = off_2BE9720;
          v9 = off_2BE9720[v6];
          if ( !v9 )
          {
LABEL_30:
            v10 = a3[1];
            if ( a3[2] >= v10 )
              goto LABEL_14;
            goto LABEL_31;
          }
LABEL_22:
          result = (char **)j__strlen(v9);
          v10 = a3[1];
          v11 = (size_t)result;
          v12 = (char *)result + v10;
          if ( (unsigned __int64)result + v10 <= a3[2] )
            goto LABEL_12;
          goto LABEL_23;
        }
        break;
      case 7:
LABEL_35:
        if ( v6 <= 5 )
        {
          result = off_2BE98C0;
          v9 = off_2BE98C0[v6];
          if ( !v9 )
            goto LABEL_30;
          goto LABEL_22;
        }
        break;
      default:
        break;
    }
LABEL_11:
    v9 = "Unknown";
    result = (char **)j__strlen("Unknown");
    v10 = a3[1];
    v11 = (size_t)result;
    v12 = (char *)result + v10;
    if ( (unsigned __int64)result + v10 <= a3[2] )
      goto LABEL_12;
    goto LABEL_23;
  }
  if ( (_DWORD)result != (_DWORD)&loc_1000012 )
  {
    if ( (_DWORD)result == 33554444 || (_DWORD)result == 16777228 )
    {
LABEL_20:
      if ( v6 <= 0xB )
      {
        result = off_2BE97A0;
        v9 = off_2BE97A0[v6];
        if ( !v9 )
          goto LABEL_30;
        goto LABEL_22;
      }
    }
    goto LABEL_11;
  }
LABEL_41:
  v10 = a3[1];
  if ( v10 <= a3[2] )
    goto LABEL_14;
LABEL_31:
  v12 = (char *)v10;
  v9 = nullptr;
  v11 = 0;
LABEL_23:
  result = (char **)sub_2236E10(a3, a3 + 3, v12, 1);
  v10 = a3[1];
LABEL_12:
  if ( v11 )
  {
    result = (char **)memcpy((void *)(*a3 + v10), v9, v11);
    v10 = v11 + a3[1];
  }
LABEL_14:
  a3[1] = v10;
  return result;
}
