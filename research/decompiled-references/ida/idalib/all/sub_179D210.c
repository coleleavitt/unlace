unsigned __int64 __fastcall sub_179D210(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 i; // r14
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rax
  unsigned __int64 result; // rax
  __int64 v17; // rbx
  __int64 v18; // rbp
  _QWORD *v19; // rcx
  _QWORD *v20; // rdx
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  unsigned int v23; // esi
  __int64 v24; // rdx

  for ( i = a2; ; i = *(_QWORD *)i )
  {
    v9 = *(_DWORD *)(i + 8);
    if ( (v9 & 8) == 0 )
      continue;
    if ( (v9 & 0x80u) == 0 )
    {
      v10 = *(_QWORD *)(i + 360);
      if ( v10 )
      {
        if ( sub_B8E490(v10) )
          continue;
        v9 = *(_DWORD *)(i + 8);
      }
    }
    if ( (v9 & 0x20) == 0 || (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 )
      break;
  }
  sub_B7E870(a3, a2, a3, a4, a5, a6);
  v15 = sub_B7E870(a3, a2, v11, v12, v13, v14);
  if ( !v15 )
    v15 = (_QWORD *)a3;
  result = sub_B8E970((__int64)(v15 + 8));
  v17 = result;
  if ( result )
  {
    if ( (*(_BYTE *)(result + 28) & 0x7F) == 0x21 )
    {
LABEL_18:
      v18 = a1 + 2608;
LABEL_19:
      if ( *(_BYTE *)(i + 100) )
      {
        v19 = *(_QWORD **)(i + 80);
        v20 = &v19[*(unsigned int *)(i + 92)];
        if ( v19 != v20 )
        {
          v21 = *(_QWORD **)(i + 80);
          if ( v17 == *v19 )
          {
LABEL_31:
            v23 = *(_DWORD *)(i + 92) - 1;
            v24 = v19[v23];
            *(_DWORD *)(i + 92) = v23;
            *v21 = v24;
          }
          else
          {
            while ( v20 != ++v21 )
            {
              if ( v17 == *v21 )
                goto LABEL_31;
            }
          }
        }
      }
      else
      {
        v22 = (_QWORD *)sub_2236570(i + 80, v17);
        if ( v22 )
        {
          *v22 = -2;
          ++*(_DWORD *)(i + 96);
        }
      }
      sub_15C14A0(v18, v17);
      while ( 1 )
      {
        result = *(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v17 = result;
        if ( !result )
          break;
        if ( (*(_BYTE *)(result + 28) & 0x7F) == 0x21 )
          goto LABEL_19;
      }
    }
    else
    {
      while ( 1 )
      {
        result = *(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v17 = result;
        if ( !result )
          break;
        if ( (*(_BYTE *)(result + 28) & 0x7F) == 0x21 )
          goto LABEL_18;
      }
    }
  }
  return result;
}
