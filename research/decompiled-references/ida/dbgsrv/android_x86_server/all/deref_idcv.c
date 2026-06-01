/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: deref_idcv
// Address: 0x000582F0

//----- (000582F0) --------------------------------------------------------
char *__cdecl deref_idcv(char *a1, char a2)
{
  char *v2; // esi
  char *v3; // edi
  int v4; // eax
  _DWORD *v5; // ecx
  char **v6; // ebx
  int v7; // edx
  char **v8; // eax
  char *v10; // [esp+4h] [ebp-38h]
  int v11; // [esp+14h] [ebp-28h]
  int v12; // [esp+18h] [ebp-24h] BYREF
  int v13; // [esp+1Ch] [ebp-20h]
  unsigned int v14; // [esp+20h] [ebp-1Ch]
  unsigned int v15; // [esp+28h] [ebp-14h]

  v2 = a1;
  v15 = __readgsdword(0x14u);
  if ( a1 )
  {
    if ( *a1 == 10 )
    {
      v12 = 0;
      v13 = 0;
      v14 = 0;
      v11 = sub_50F20();
      v3 = a1;
      while ( 1 )
      {
        v4 = *((_DWORD *)v3 + 2);
        if ( v4 < 0 )
        {
          v3 = (char *)sub_58250(v11, ~v4);
        }
        else
        {
          v5 = *((_DWORD **)v3 + 1);
          if ( !v5 )
            goto LABEL_23;
          if ( *v5 != 289621065 )
            goto LABEL_23;
          if ( (unsigned int)v4 >= v5[4] )
            goto LABEL_23;
          v3 = (char *)(v5[3] + 20 * v4);
          if ( !v3 )
            goto LABEL_23;
        }
        if ( (a2 & 1) != 0 || *v3 != 10 )
          break;
        v6 = (char **)(v12 + 4 * v13);
        v7 = 4 * v13;
        v8 = (char **)v12;
        if ( 4 * v13 )
        {
          v8 = (char **)v12;
          while ( v3 != *v8 )
          {
            ++v8;
            v7 -= 4;
            if ( !v7 )
              goto LABEL_20;
          }
        }
        if ( v8 != v6 )
        {
LABEL_23:
          v2 = nullptr;
          set_qerrno(1563);
          goto LABEL_24;
        }
LABEL_20:
        if ( v14 < v13 + 1 )
        {
          v12 = (int)qvector_reserve((int)&v12, (void *)v12, v13 + 1, 4u);
          v6 = (char **)(v12 + 4 * v13);
        }
        *v6 = v3;
        ++v13;
      }
      if ( (a2 & 2) == 0 || (*a1 = 2, v10 = v3, v3 = a1, v2 = nullptr, !copy_idcv(a1, v10)) )
        v2 = v3;
LABEL_24:
      if ( v12 )
      {
        v13 = 0;
        qfree((void *)v12);
        v12 = 0;
        v14 = 0;
      }
    }
  }
  else
  {
    set_qerrno(1563);
    return nullptr;
  }
  return v2;
}
