__int64 __fastcall sub_18C1D90(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  unsigned int *v6; // rbx
  __int64 result; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v12; // r12
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // rdi
  _QWORD *v19; // rdx
  _QWORD *v20; // rcx
  _QWORD *v21; // rdx
  _QWORD *v22; // rcx
  __int64 v23; // rdi
  _QWORD *v24; // rdx
  _QWORD *v25; // rcx
  _QWORD *v26; // rdx

  v5 = *(_QWORD *)(a1 + 4616);
  v6 = (unsigned int *)(v5 + 640LL * *(unsigned int *)(a1 + 4624) - 640);
  result = *v6;
  if ( (_DWORD)result == 3 )
    return result;
  if ( (unsigned int)result <= 1 )
    return result;
  v8 = *(_QWORD *)(a2[1] & 0xFFFFFFFFFFFFFFF0LL);
  result = (unsigned int)*(unsigned __int8 *)(v8 + 16) - 2;
  if ( (unsigned __int8)(*(_BYTE *)(v8 + 16) - 2) <= 4u )
    return result;
  if ( (unsigned __int8)sub_F6A690(v8, 21, v5, a4, a5) )
  {
    if ( !*((_BYTE *)v6 + 308) )
      goto LABEL_46;
    v22 = *((_QWORD **)v6 + 36);
    v23 = v6[75];
    v24 = &v22[v23];
    if ( v22 != v24 )
    {
      result = *((_QWORD *)v6 + 36);
      if ( a2 == (_QWORD *)*v22 )
        goto LABEL_38;
      do
      {
        result += 8;
        if ( v24 == (_QWORD *)result )
          break;
      }
      while ( a2 != *(_QWORD **)result );
    }
    if ( (unsigned int)v23 < v6[74] )
    {
      v6[75] = v23 + 1;
      *v24 = a2;
      v22 = *((_QWORD **)v6 + 36);
      result = (__int64)&v22[v23];
    }
    else
    {
LABEL_46:
      result = sub_2236760(v6 + 72, a2);
      v22 = *((_QWORD **)v6 + 36);
      if ( !*((_BYTE *)v6 + 308) )
      {
        v25 = &v22[v6[74]];
        goto LABEL_39;
      }
    }
LABEL_38:
    v25 = &v22[v6[75]];
LABEL_39:
    if ( (_QWORD *)result != v25 && *(_QWORD *)result >= 0xFFFFFFFFFFFFFFFELL )
    {
      result += 8;
      do
      {
        v26 = (_QWORD *)result;
        if ( v25 == (_QWORD *)result )
          break;
        result += 8;
      }
      while ( *v26 >= 0xFFFFFFFFFFFFFFFELL );
    }
    return result;
  }
  if ( sub_9ECBA0((__int64)a2, 21, v9, v10, v11) )
    v12 = a2[2];
  else
    v12 = a2[3];
  result = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (unsigned __int8)(result - 2) <= 4u || (_BYTE)result == 42 )
  {
    while ( 1 )
    {
      v13 = (_QWORD *)sub_BFD550(v12);
      v16 = *(unsigned __int16 *)v13;
      LOWORD(v16) = v16 & 0x1FF;
      if ( (_WORD)v16 != 46 || (*v13 & 0x80000LL) == 0 )
        break;
      v12 = v13[2];
    }
    result = *(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(result + 16) == 42 )
    {
      result = sub_F6A690(*(_QWORD *)(*(_QWORD *)(result + 32) & 0xFFFFFFFFFFFFFFF0LL), 21, v16, v14, v15);
      if ( (_BYTE)result )
      {
        if ( !*((_BYTE *)v6 + 308) )
          goto LABEL_48;
        v17 = *((_QWORD **)v6 + 36);
        v18 = v6[75];
        v19 = &v17[v18];
        if ( v17 != v19 )
        {
          result = *((_QWORD *)v6 + 36);
          if ( a2 == (_QWORD *)*v17 )
            goto LABEL_23;
          do
          {
            result += 8;
            if ( v19 == (_QWORD *)result )
              break;
          }
          while ( a2 != *(_QWORD **)result );
        }
        if ( (unsigned int)v18 < v6[74] )
        {
          v6[75] = v18 + 1;
          *v19 = a2;
          v17 = *((_QWORD **)v6 + 36);
          result = (__int64)&v17[v18];
        }
        else
        {
LABEL_48:
          result = sub_2236760(v6 + 72, a2);
          v17 = *((_QWORD **)v6 + 36);
          if ( !*((_BYTE *)v6 + 308) )
          {
            v20 = &v17[v6[74]];
            goto LABEL_24;
          }
        }
LABEL_23:
        v20 = &v17[v6[75]];
LABEL_24:
        if ( (_QWORD *)result != v20 && *(_QWORD *)result >= 0xFFFFFFFFFFFFFFFELL )
        {
          result += 8;
          do
          {
            v21 = (_QWORD *)result;
            if ( (_QWORD *)result == v20 )
              break;
            result += 8;
          }
          while ( *v21 >= 0xFFFFFFFFFFFFFFFELL );
        }
      }
    }
  }
  return result;
}
