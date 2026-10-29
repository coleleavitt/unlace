__int64 __fastcall reg_int_op(const char *a1, unsigned __int8 a2, int a3, const char *a4)
{
  __int64 v5; // rbx
  unsigned int v6; // ebp
  int v7; // eax
  int v8; // eax
  __int64 v10; // rdi
  __int64 v11; // rdi
  _QWORD v12[7]; // [rsp+0h] [rbp-38h] BYREF

  v12[3] = __readfsqword(0x28u);
  v12[0] = 0;
  sub_854530((__int64)v12, a1, a4, a2);
  v5 = v12[0];
  v6 = sub_852FB0((__int64)v12, a3);
  sub_8509A0(v5);
  v7 = *(_DWORD *)(v5 + 5728);
  *(_QWORD *)(v5 + 5720) = 0;
  if ( v7 )
  {
    v8 = v7 - 1;
    *(_DWORD *)(v5 + 5728) = v8;
    if ( !v8 )
    {
      v10 = *(unsigned int *)(v5 + 5712);
      if ( (_DWORD)v10 == -1 )
      {
        qmutex_unlock(*(_QWORD *)v5);
      }
      else
      {
        qclose(v10);
        v11 = *(_QWORD *)v5;
        *(_DWORD *)(v5 + 5712) = -1;
        qmutex_unlock(v11);
      }
    }
  }
  return v6;
}
