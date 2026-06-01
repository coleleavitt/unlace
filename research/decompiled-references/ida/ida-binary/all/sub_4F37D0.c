__int64 __fastcall sub_4F37D0(char *a1, void **a2, __int64 a3, double a4)
{
  unsigned int v4; // r12d
  char *v5; // r13
  __int64 v6; // rdi
  void (*v7)(); // rax
  __int64 *v9; // rbx
  __int64 *v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // r15
  unsigned int v13; // eax
  void *ptr[3]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-40h]

  v4 = 0;
  v15 = __readfsqword(0x28u);
  v5 = a1;
  if ( (_DWORD)a2 == 1 )
  {
    v9 = *((__int64 **)a1 + 6);
    v4 = 1;
    v10 = &v9[*((_QWORD *)a1 + 7)];
    while ( v10 != v9 )
    {
      v11 = *v9;
      v12 = *(_QWORD *)(*v9 + 32);
      v13 = *(_DWORD *)(v12 + 8);
      if ( v13 <= 5 )
      {
        if ( v13 > 2 )
          goto LABEL_7;
      }
      else if ( v13 == 13 )
      {
LABEL_7:
        if ( *(_QWORD *)(v12 + 112) > 1u )
        {
          if ( *(_BYTE *)(v11 + 24) )
            sub_4F1F40(a4, (__int64)a1, (__int64)a2, a3, v11);
          a1 = *(char **)(v11 + 16);
          a2 = *(void ***)(*v9 + 32);
          if ( sub_4F1FE0((QT::QObject *)a1, (__int64)a2) )
          {
            QT::QLineEdit::text((QT::QLineEdit *)ptr);
            a1 = (char *)&s1;
            if ( *(_QWORD *)(v12 + 112) )
              a1 = *(char **)(v12 + 104);
            a2 = ptr;
            sub_4F76D0(a1, ptr);
            if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
            {
              a1 = (char *)ptr[0];
              free(ptr[0]);
            }
          }
        }
      }
      ++v9;
    }
  }
  v6 = *((_QWORD *)v5 + 5);
  v7 = *(void (**)())(*(_QWORD *)v6 + 56LL);
  if ( v7 == nullsub_41 )
    return v15 - __readfsqword(0x28u);
  else
    return ((__int64 (__fastcall *)(__int64, _QWORD))v7)(v6, v4);
}
