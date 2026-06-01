__int64 __fastcall reg_data_type(_DWORD *a1, const char *a2, const char *a3)
{
  __int64 v3; // rbx
  unsigned int v4; // ebp
  int v5; // eax
  int v6; // eax
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10[7]; // [rsp+0h] [rbp-38h] BYREF

  v10[3] = __readfsqword(0x28u);
  v10[0] = 0;
  sub_854530((__int64)v10, a2, a3, 0);
  v3 = v10[0];
  v4 = sub_851D60(v10, a1);
  sub_8509A0(v3);
  v5 = *(_DWORD *)(v3 + 5728);
  *(_QWORD *)(v3 + 5720) = 0;
  if ( v5 )
  {
    v6 = v5 - 1;
    *(_DWORD *)(v3 + 5728) = v6;
    if ( !v6 )
    {
      v8 = *(unsigned int *)(v3 + 5712);
      if ( (_DWORD)v8 == -1 )
      {
        qmutex_unlock(*(_QWORD *)v3);
      }
      else
      {
        qclose(v8);
        v9 = *(_QWORD *)v3;
        *(_DWORD *)(v3 + 5712) = -1;
        qmutex_unlock(v9);
      }
    }
  }
  return v4;
}
