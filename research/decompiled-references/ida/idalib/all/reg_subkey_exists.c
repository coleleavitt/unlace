__int64 __fastcall reg_subkey_exists(const char *a1)
{
  __int64 v1; // rbx
  unsigned int v2; // ebp
  int v3; // eax
  int v4; // eax
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int8 v9; // [rsp+Ch] [rbp-2Ch]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  sub_854530((__int64)&v8, nullptr, a1, 0);
  v1 = v8;
  v2 = v9 ^ 1;
  sub_8509A0(v8);
  v3 = *(_DWORD *)(v1 + 5728);
  *(_QWORD *)(v1 + 5720) = 0;
  if ( v3 )
  {
    v4 = v3 - 1;
    *(_DWORD *)(v1 + 5728) = v4;
    if ( !v4 )
    {
      v6 = *(unsigned int *)(v1 + 5712);
      if ( (_DWORD)v6 == -1 )
      {
        qmutex_unlock(*(_QWORD *)v1);
      }
      else
      {
        qclose(v6);
        v7 = *(_QWORD *)v1;
        *(_DWORD *)(v1 + 5712) = -1;
        qmutex_unlock(v7);
      }
    }
  }
  return v2;
}
