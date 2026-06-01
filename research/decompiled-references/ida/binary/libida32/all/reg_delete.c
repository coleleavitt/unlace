__int64 __fastcall reg_delete(const char *a1, const char *a2)
{
  unsigned int v2; // ebp
  __int64 v3; // rbx
  int v4; // eax
  int v5; // eax
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int8 v10; // [rsp+Ch] [rbp-2Ch]
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  sub_830BD0((__int64)&v9, a1, a2, 3);
  v2 = v10;
  if ( !v10 )
    v2 = sub_82E540((__int64)&v9);
  v3 = v9;
  sub_82D040(v9);
  v4 = *(_DWORD *)(v3 + 5728);
  *(_QWORD *)(v3 + 5720) = 0;
  if ( v4 )
  {
    v5 = v4 - 1;
    *(_DWORD *)(v3 + 5728) = v5;
    if ( !v5 )
    {
      v7 = *(unsigned int *)(v3 + 5712);
      if ( (_DWORD)v7 == -1 )
      {
        qmutex_unlock(*(_QWORD *)v3);
      }
      else
      {
        qclose(v7);
        v8 = *(_QWORD *)v3;
        *(_DWORD *)(v3 + 5712) = -1;
        qmutex_unlock(v8);
      }
    }
  }
  return v2;
}

