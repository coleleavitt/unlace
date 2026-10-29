__int64 __fastcall reg_subkey_children(__int64 *a1, const char *a2, char a3)
{
  __int64 v4; // rbp
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // eax
  __int64 v9; // rdi
  __int64 v10; // rdi
  int v11[2]; // [rsp+0h] [rbp-48h] BYREF
  void *v12; // [rsp+18h] [rbp-30h]

  v12 = (void *)__readfsqword(0x28u);
  *(_QWORD *)v11 = 0;
  sub_830BD0((__int64)v11, nullptr, a2, 0);
  v4 = *(_QWORD *)v11;
  v5 = sub_82CD90(v11, a1, a3);
  sub_82D040(v4);
  v6 = *(_DWORD *)(v4 + 5728);
  *(_QWORD *)(v4 + 5720) = 0;
  if ( v6 )
  {
    v7 = v6 - 1;
    *(_DWORD *)(v4 + 5728) = v7;
    if ( !v7 )
    {
      v9 = *(unsigned int *)(v4 + 5712);
      if ( (_DWORD)v9 == -1 )
      {
        qmutex_unlock(*(_QWORD *)v4);
      }
      else
      {
        qclose(v9);
        v10 = *(_QWORD *)v4;
        *(_DWORD *)(v4 + 5712) = -1;
        qmutex_unlock(v10);
      }
    }
  }
  return v5;
}

