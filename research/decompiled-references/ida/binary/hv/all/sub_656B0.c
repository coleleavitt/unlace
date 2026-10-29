__int64 __fastcall sub_656B0(__int64 a1, _BYTE *a2, char a3)
{
  char v4; // r14
  _BYTE *v5; // r13
  _BYTE *v6; // r15
  _BYTE *v7; // rbx
  char v8; // al
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // r12
  __int64 v12; // r13
  void *v13; // rdx
  __int64 v14; // r14
  void *v15; // rdi
  void *v16; // rdi
  unsigned int v18; // edi
  __int64 v19; // rax
  void *v20; // rdi
  void *v21; // [rsp+0h] [rbp-68h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v24; // [rsp+18h] [rbp-50h]
  unsigned __int64 v25; // [rsp+28h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v4 = *a2;
  if ( *a2 )
  {
    v5 = a2;
    do
    {
      if ( (unsigned int)v4 > 0x7F )
        goto LABEL_19;
      if ( isspace(v4) )
      {
        ++v5;
        goto LABEL_26;
      }
      if ( v4 == 59 && a3 )
        return a1;
      v6 = v5 + 1;
      v7 = v5;
      if ( v4 == 34 )
      {
        do
          v8 = *++v7;
        while ( v8 != 34 && v8 );
      }
      else
      {
LABEL_19:
        v18 = (char)*v5;
        v7 = v5;
        v6 = v5;
        if ( *v5 )
        {
          do
          {
            if ( v18 <= 0x7F && isspace(v18) )
              break;
            v18 = (char)*++v7;
          }
          while ( (_BYTE)v18 );
          v6 = v5;
        }
      }
      v9 = *(_QWORD *)(a1 + 8);
      v10 = *(_QWORD *)a1;
      if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v9 + 1) )
      {
        v19 = sub_96080(a1, v10, v9 + 1, 24);
        *(_QWORD *)a1 = v19;
        v9 = *(_QWORD *)(a1 + 8);
        v10 = v19;
      }
      v11 = 0;
      v12 = v10 + 24 * v9;
      v13 = nullptr;
      *(_QWORD *)v12 = 0;
      *(_OWORD *)(v12 + 8) = 0;
      ptr = nullptr;
      ++*(_QWORD *)(a1 + 8);
      v24 = 0;
      v14 = v7 - v6;
      if ( v7 != v6 )
      {
        v20 = nullptr;
        if ( v14 != -1 )
        {
          ptr = (void *)sub_96080(&ptr, 0, v14 + 1, 1);
          v20 = ptr;
        }
        *(_QWORD *)&v24 = v14 + 1;
        memmove(v20, v6, v7 - v6);
        *((_BYTE *)ptr + v14) = 0;
        v13 = ptr;
        v11 = *((_QWORD *)&v24 + 1);
        v14 = v24;
      }
      ptr = nullptr;
      v24 = 0;
      v15 = *(void **)v12;
      if ( *(_QWORD *)v12 )
      {
        *(_QWORD *)(v12 + 8) = 0;
        v21 = v13;
        j__free(v15);
        v13 = v21;
      }
      *(_QWORD *)v12 = v13;
      v16 = ptr;
      *(_QWORD *)(v12 + 8) = v14;
      *(_QWORD *)(v12 + 16) = v11;
      if ( v16 )
      {
        *(_QWORD *)&v24 = 0;
        j__free(v16);
      }
      if ( !*v7 )
        return a1;
      v5 = v7 + 1;
LABEL_26:
      v4 = *v5;
    }
    while ( *v5 );
  }
  return a1;
}

