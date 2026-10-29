unsigned __int64 __fastcall sub_22281D0(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned __int64 result; // rax
  __int64 v4; // rdx
  int v5; // r8d
  int v6; // ecx
  __int64 v7; // rdx
  int v8; // r8d
  int v9; // ecx
  __int64 v10; // r11
  __int64 i; // rdx
  __int64 v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned __int64 *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rcx

  v2 = *a1;
  result = a2 - 1;
  if ( a2 == 1 )
  {
    v6 = *(_DWORD *)(v2 + 12);
    v5 = *(_DWORD *)(v2 + 8);
    v4 = *a1;
    a2 = 1;
  }
  else
  {
    v4 = v2 + 16LL * (unsigned int)result;
    v5 = *(_DWORD *)(v4 + 8);
    v6 = *(_DWORD *)(v4 + 12);
    if ( v6 == v5 - 1 )
    {
      v7 = v2 + 16LL * (a2 - 2);
      while ( (_DWORD)result != 1 )
      {
        v8 = *(_DWORD *)(v7 + 8);
        v9 = *(_DWORD *)(v7 + 12);
        v10 = v7;
        v7 -= 16;
        if ( v8 - 1 != v9 )
        {
          v18 = (unsigned int)(v9 + 1);
          *(_DWORD *)(v10 + 12) = v18;
          if ( (_DWORD)v18 == v8 )
            return result;
          i = *(_QWORD *)(*(_QWORD *)v10 + 8 * v18);
          if ( a2 == (_DWORD)result )
          {
LABEL_12:
            result = i & 0xFFFFFFFFFFFFFFC0LL;
            v17 = (unsigned __int64 *)(16LL * a2 + v2);
            *v17 = i & 0xFFFFFFFFFFFFFFC0LL;
            v17[1] = (unsigned int)(i & 0x3F) + 1;
            return result;
          }
LABEL_9:
          v12 = (unsigned int)result;
          v13 = result + 1;
          v14 = 16 * v12 + v2;
          *(_QWORD *)v14 = i & 0xFFFFFFFFFFFFFFC0LL;
          *(_DWORD *)(v14 + 8) = (i & 0x3F) + 1;
          *(_DWORD *)(v14 + 12) = 0;
          for ( i = *(_QWORD *)(i & 0xFFFFFFFFFFFFFFC0LL); a2 != v13; i = *(_QWORD *)(i & 0xFFFFFFFFFFFFFFC0LL) )
          {
            v15 = v13++;
            v16 = *a1 + 16 * v15;
            *(_QWORD *)v16 = i & 0xFFFFFFFFFFFFFFC0LL;
            *(_DWORD *)(v16 + 8) = (i & 0x3F) + 1;
            *(_DWORD *)(v16 + 12) = 0;
          }
          v2 = *a1;
          goto LABEL_12;
        }
        result = (unsigned int)(result - 1);
      }
      result = (unsigned int)(*(_DWORD *)(v2 + 12) + 1);
      *(_DWORD *)(v2 + 12) = result;
      if ( (_DWORD)result == *(_DWORD *)(v2 + 8) )
        return result;
      i = *(_QWORD *)(*(_QWORD *)v2 + 8 * result);
      LODWORD(result) = 1;
      goto LABEL_9;
    }
  }
  v19 = (unsigned int)(v6 + 1);
  *(_DWORD *)(v4 + 12) = v19;
  if ( v5 != (_DWORD)v19 )
  {
    i = *(_QWORD *)(*(_QWORD *)v4 + 8 * v19);
    goto LABEL_12;
  }
  return result;
}
