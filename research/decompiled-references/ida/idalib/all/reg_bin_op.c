__int64 __fastcall reg_bin_op(
        const char *a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int64 a4,
        const char *a5,
        int a6)
{
  __int64 v9; // rbx
  unsigned int v10; // ebp
  int v11; // eax
  int v12; // eax
  __int64 v14; // rdi
  __int64 v15; // rdi
  _QWORD v16[9]; // [rsp+0h] [rbp-48h] BYREF

  v16[3] = __readfsqword(0x28u);
  v16[0] = 0;
  sub_854530((__int64)v16, a1, a5, a2);
  v9 = v16[0];
  v10 = sub_853070((__int64)v16, a3, a4, a6);
  sub_8509A0(v9);
  v11 = *(_DWORD *)(v9 + 5728);
  *(_QWORD *)(v9 + 5720) = 0;
  if ( v11 )
  {
    v12 = v11 - 1;
    *(_DWORD *)(v9 + 5728) = v12;
    if ( !v12 )
    {
      v14 = *(unsigned int *)(v9 + 5712);
      if ( (_DWORD)v14 == -1 )
      {
        qmutex_unlock(*(_QWORD *)v9);
      }
      else
      {
        qclose(v14);
        v15 = *(_QWORD *)v9;
        *(_DWORD *)(v9 + 5712) = -1;
        qmutex_unlock(v15);
      }
    }
  }
  return v10;
}
