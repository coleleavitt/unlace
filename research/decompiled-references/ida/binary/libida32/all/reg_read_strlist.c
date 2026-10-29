unsigned __int64 __fastcall reg_read_strlist(__int64 *a1, const char *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // r8d
  int v6; // r9d
  int v7; // eax
  int v8; // eax
  __int64 v10; // rdi
  __int64 v11; // rdi
  _QWORD v12[3]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v12[0] = 0;
  sub_830BD0((__int64)v12, nullptr, a2, 4);
  v2 = v12[0];
  sub_82E0A0((__int64)v12, a1, v3, v4, v5, v6);
  sub_82D040(v2);
  v7 = *(_DWORD *)(v2 + 5728);
  *(_QWORD *)(v2 + 5720) = 0;
  if ( v7 )
  {
    v8 = v7 - 1;
    *(_DWORD *)(v2 + 5728) = v8;
    if ( !v8 )
    {
      v10 = *(unsigned int *)(v2 + 5712);
      if ( (_DWORD)v10 == -1 )
      {
        qmutex_unlock(*(_QWORD *)v2);
      }
      else
      {
        qclose(v10);
        v11 = *(_QWORD *)v2;
        *(_DWORD *)(v2 + 5712) = -1;
        qmutex_unlock(v11);
      }
    }
  }
  return v13 - __readfsqword(0x28u);
}

