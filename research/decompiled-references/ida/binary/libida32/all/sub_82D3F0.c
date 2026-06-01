void __noreturn sub_82D3F0()
{
  __int64 v0; // rbx
  int v1; // eax
  int v2; // eax
  __int64 v3; // rdi
  __int64 v4; // rdi

  v0 = qword_2CAD038;
  sub_82D040(qword_2CAD038);
  v1 = *(_DWORD *)(v0 + 5728);
  *(_QWORD *)(v0 + 5720) = 0;
  if ( v1 )
  {
    v2 = v1 - 1;
    *(_DWORD *)(v0 + 5728) = v2;
    if ( !v2 )
    {
      v3 = *(unsigned int *)(v0 + 5712);
      if ( (_DWORD)v3 == -1 )
      {
        qmutex_unlock(*(_QWORD *)v0);
      }
      else
      {
        qclose(v3);
        v4 = *(_QWORD *)v0;
        *(_DWORD *)(v0 + 5712) = -1;
        qmutex_unlock(v4);
      }
    }
  }
  sub_3B74D0((int)"registry");
}

