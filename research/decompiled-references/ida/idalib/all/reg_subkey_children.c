__int64 __fastcall reg_subkey_children(const char *a1, const char *a2, unsigned __int8 a3)
{
  __int64 v4; // rbp
  const char *v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  __int64 v11; // rdi
  __int64 v12; // rdi
  int v13[2]; // [rsp+0h] [rbp-48h] BYREF
  void *v14; // [rsp+18h] [rbp-30h]

  v14 = (void *)__readfsqword(0x28u);
  *(_QWORD *)v13 = 0;
  sub_854530((__int64)v13, nullptr, a2, 0);
  v4 = *(_QWORD *)v13;
  v7 = sub_8506F0(v13, a1, a3, v5, v6);
  sub_8509A0(v4);
  v8 = *(_DWORD *)(v4 + 5728);
  *(_QWORD *)(v4 + 5720) = 0;
  if ( v8 )
  {
    v9 = v8 - 1;
    *(_DWORD *)(v4 + 5728) = v9;
    if ( !v9 )
    {
      v11 = *(unsigned int *)(v4 + 5712);
      if ( (_DWORD)v11 == -1 )
      {
        qmutex_unlock(*(_QWORD *)v4);
      }
      else
      {
        qclose(v11);
        v12 = *(_QWORD *)v4;
        *(_DWORD *)(v4 + 5712) = -1;
        qmutex_unlock(v12);
      }
    }
  }
  return v7;
}
