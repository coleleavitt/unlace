unsigned __int64 __fastcall reg_str_set(const char *a1, const char *a2, char *a3)
{
  __int64 v4; // rbx
  unsigned int v5; // eax
  int v6; // eax
  int v7; // eax
  __int64 v9; // rdi
  __int64 v10; // rdi
  int v11[2]; // [rsp+0h] [rbp-38h] BYREF
  int v12[2]; // [rsp+18h] [rbp-20h]

  *(_QWORD *)v12 = __readfsqword(0x28u);
  *(_QWORD *)v11 = 0;
  sub_854530((__int64)v11, a1, a2, 1);
  v4 = *(_QWORD *)v11;
  if ( a3 )
  {
    v5 = strlen(a3);
    sub_852B10(v4, 1, a3, v5);
  }
  sub_8509A0(v4);
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
  return *(_QWORD *)v12 - __readfsqword(0x28u);
}
