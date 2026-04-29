__int64 __fastcall sub_296900(__int64 **a1, __int64 a2, _QWORD *a3, int a4)
{
  __int64 *v4; // rax
  __int64 *v5; // rbx
  unsigned int v8; // r15d
  __int64 result; // rax
  __int64 v10; // rax
  __int64 *v11; // rdx
  __int64 *v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  _QWORD v15[9]; // [rsp+10h] [rbp-48h] BYREF

  v15[1] = __readfsqword(0x28u);
  v4 = *a1;
  if ( *a1 )
  {
    if ( a1[1] )
    {
      v5 = (__int64 *)v4[1];
      if ( v4 != v5 )
      {
        v8 = 0;
        while ( 1 )
        {
          while ( 1 )
          {
LABEL_5:
            if ( a4 != -1 )
            {
              while ( v5[3] == a4 )
              {
                v10 = *v5;
                if ( (*v5 & 2) == 0 )
                  goto LABEL_9;
                if ( *a1 == v5 )
                  return v8;
              }
            }
            v15[0] = v5;
            result = sub_296780((__int64)a1, a2, (__int64)v15, a3);
            if ( (_DWORD)result == -1 )
              return result;
            v8 += result;
            v10 = *v5;
            if ( (*v5 & 2) == 0 )
              break;
LABEL_11:
            if ( *a1 == v5 )
              return v8;
          }
LABEL_9:
          v11 = (__int64 *)v5[2];
          if ( (*(_BYTE *)v11 & 2) == 0 )
          {
            do
            {
              v5 = v11;
              v11 = (__int64 *)v11[1];
            }
            while ( (*(_BYTE *)v11 & 2) == 0 );
            goto LABEL_11;
          }
          v12 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFFCLL);
          v13 = *v12;
          if ( (*v12 & 2) == 0 )
          {
            while ( (__int64 *)v12[2] == v5 )
            {
              v5 = v12;
              v14 = v13 & 0xFFFFFFFFFFFFFFFCLL;
              v13 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v13 & 2) != 0 )
              {
                v5 = (__int64 *)v14;
                if ( *a1 != (__int64 *)v14 )
                  goto LABEL_5;
                return v8;
              }
              v12 = (__int64 *)v14;
            }
          }
          v5 = v12;
          if ( *a1 == v12 )
            return v8;
        }
      }
    }
  }
  return 0;
}
