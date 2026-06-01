/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_473D17
// Address: 0x00473D17

//----- (00473D17) --------------------------------------------------------
unsigned int __usercall sub_473D17@<eax>(int a1@<edi>, int a2, __int16 *lpWideCharStr, DWORD a4)
{
  int v4; // eax
  char v5; // dl
  DWORD v6; // ecx
  void *v7; // esi
  __int16 *v8; // edx
  SIZE_T v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  int v14; // edi
  int v15; // ebx
  char v16; // al
  int v17; // ebx
  _BYTE *v18; // edx
  DWORD v19; // ecx
  bool v20; // zf
  char v21; // al
  int v22; // ebx
  _BYTE *v23; // edx
  DWORD v24; // ecx
  int v25; // eax
  char v26; // al
  int v27; // eax
  DWORD LastError; // eax
  unsigned int v29; // edi
  DWORD v31; // ecx
  unsigned int v32; // eax
  int v33; // [esp-8h] [ebp-38h]
  DWORD Mode; // [esp+8h] [ebp-28h] BYREF
  unsigned __int16 *v35; // [esp+Ch] [ebp-24h]
  int v36; // [esp+10h] [ebp-20h]
  DWORD NumberOfCharsRead; // [esp+14h] [ebp-1Ch] BYREF
  HANDLE hConsoleHandle; // [esp+18h] [ebp-18h]
  LPVOID lpBuffer; // [esp+1Ch] [ebp-14h]
  int v40; // [esp+20h] [ebp-10h]
  DWORD nNumberOfBytesToRead; // [esp+24h] [ebp-Ch]
  int v42; // [esp+28h] [ebp-8h]
  char v43; // [esp+2Fh] [ebp-1h]

  if ( a2 != -2 )
  {
    if ( a2 >= 0
      && (unsigned int)a2 < dword_4B7D38[0]
      && (a1 = 56 * (a2 & 0x3F),
          v42 = a2 >> 6,
          v4 = (int)*(&dword_4B7B38 + (a2 >> 6)),
          v40 = a1,
          v36 = 1,
          v5 = *(_BYTE *)(v4 + a1 + 40),
          (v5 & 1) != 0) )
    {
      v6 = a4;
      if ( a4 <= 0x7FFFFFFF )
      {
        if ( !a4 || (v5 & 2) != 0 )
          return 0;
        if ( lpWideCharStr )
        {
          hConsoleHandle = *(HANDLE *)(v4 + a1 + 24);
          v43 = *(_BYTE *)(v4 + a1 + 41);
          v7 = nullptr;
          if ( v43 == 1 )
          {
            if ( (a4 & 1) == 0 )
            {
              v9 = 4;
              nNumberOfBytesToRead = 4;
              if ( a4 >> 1 >= 4 )
              {
                v9 = a4 >> 1;
                nNumberOfBytesToRead = a4 >> 1;
              }
              v7 = sub_479531(v9);
              sub_479216(nullptr);
              sub_479216(nullptr);
              lpBuffer = v7;
              if ( v7 )
              {
                v10 = sub_474CB1(a2, a1, a2, 0, 0, 1u);
                v11 = (int)*(&dword_4B7B38 + v42);
                *(_DWORD *)(a1 + v11 + 32) = v10;
                v12 = v42;
                *(_DWORD *)(a1 + v11 + 36) = v13;
                v8 = (__int16 *)v7;
                v6 = nNumberOfBytesToRead;
                v4 = (int)*(&dword_4B7B38 + v12);
                goto LABEL_23;
              }
              *sub_46B984() = 12;
              *sub_46B971() = 8;
LABEL_40:
              v29 = -1;
LABEL_41:
              sub_479216(v7);
              return v29;
            }
          }
          else
          {
            if ( v43 != 2 )
            {
              v8 = lpWideCharStr;
              nNumberOfBytesToRead = a4;
              lpBuffer = lpWideCharStr;
LABEL_23:
              v14 = 0;
              v35 = (unsigned __int16 *)v8;
              v15 = a2;
              if ( (*(_BYTE *)(v40 + v4 + 40) & 0x48) != 0 )
              {
                v16 = *(_BYTE *)(v40 + v4 + 42);
                v15 = a2;
                if ( v16 != 10 )
                {
                  if ( v6 )
                  {
                    v17 = v40;
                    v14 = 1;
                    *(_BYTE *)v8 = v16;
                    v18 = (char *)v8 + 1;
                    v19 = v6 - 1;
                    v20 = v43 == 0;
                    lpBuffer = v18;
                    nNumberOfBytesToRead = v19;
                    *((_BYTE *)&(*(&dword_4B7B38 + v42))[1].LockSemaphore + v17 + 2) = 10;
                    v15 = a2;
                    if ( !v20 )
                    {
                      v21 = *((_BYTE *)&(*(&dword_4B7B38 + v42))[1].LockSemaphore + v40 + 3);
                      v15 = a2;
                      if ( v21 != 10 )
                      {
                        if ( v19 )
                        {
                          v22 = v40;
                          *v18 = v21;
                          v23 = v18 + 1;
                          v24 = v19 - 1;
                          v20 = v43 == 1;
                          lpBuffer = v23;
                          v25 = (int)*(&dword_4B7B38 + v42);
                          v14 = 2;
                          nNumberOfBytesToRead = v24;
                          *(_BYTE *)(v22 + v25 + 43) = 10;
                          v15 = a2;
                          if ( v20 )
                          {
                            v26 = *((_BYTE *)&(*(&dword_4B7B38 + v42))[1].SpinCount + v40);
                            v15 = a2;
                            if ( v26 != 10 )
                            {
                              if ( v24 )
                              {
                                *v23 = v26;
                                nNumberOfBytesToRead = v24 - 1;
                                v27 = (int)*(&dword_4B7B38 + v42);
                                lpBuffer = v23 + 1;
                                v14 = 3;
                                *(_BYTE *)(v40 + v27 + 44) = 10;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              if ( sub_47C24A(v15, v14, v15)
                && *((char *)&(*(&dword_4B7B38 + v42))[1].LockSemaphore + v40) < 0
                && GetConsoleMode(hConsoleHandle, &Mode) )
              {
                if ( v43 == 2 )
                {
                  if ( !ReadConsoleW(hConsoleHandle, lpBuffer, nNumberOfBytesToRead >> 1, &NumberOfCharsRead, nullptr) )
                  {
                    LastError = GetLastError();
LABEL_39:
                    sub_46B94E(LastError);
                    goto LABEL_40;
                  }
                  v31 = a4;
                  v29 = v14 + 2 * NumberOfCharsRead;
                  goto LABEL_47;
                }
              }
              else
              {
                LOBYTE(v36) = 0;
              }
              if ( !ReadFile(hConsoleHandle, lpBuffer, nNumberOfBytesToRead, &NumberOfCharsRead, nullptr)
                || (v31 = a4, NumberOfCharsRead > a4) )
              {
                LastError = GetLastError();
                if ( LastError == 5 )
                {
                  *sub_46B984() = 9;
                  *sub_46B971() = 5;
                  goto LABEL_40;
                }
                if ( LastError == 109 )
                {
                  v29 = 0;
                  goto LABEL_41;
                }
                goto LABEL_39;
              }
              v29 = NumberOfCharsRead + v14;
LABEL_47:
              if ( *((char *)&(*(&dword_4B7B38 + v42))[1].LockSemaphore + v40) < 0 )
              {
                if ( v43 == 2 )
                {
                  v33 = v29 >> 1;
                  if ( (_BYTE)v36 )
                    v32 = sub_473B88(v15, v35, v33);
                  else
                    v32 = sub_473882(v15, (__int16 *)v35, v33);
                }
                else
                {
                  v32 = sub_473A31(v15, (char *)lpBuffer, v29, (LPWSTR)lpWideCharStr, v31 >> 1);
                }
                v29 = v32;
              }
              goto LABEL_41;
            }
            if ( (a4 & 1) == 0 )
            {
              v8 = lpWideCharStr;
              nNumberOfBytesToRead = a4;
              lpBuffer = lpWideCharStr;
              v4 = (int)*(&dword_4B7B38 + v42);
              goto LABEL_23;
            }
          }
          *sub_46B971() = 0;
          *sub_46B984() = 22;
          sub_467EF4(a2, a1);
          goto LABEL_40;
        }
      }
      *sub_46B971() = 0;
      *sub_46B984() = 22;
    }
    else
    {
      *sub_46B971() = 0;
      *sub_46B984() = 9;
    }
    sub_467EF4(a2, a1);
    return -1;
  }
  *sub_46B971() = 0;
  *sub_46B984() = 9;
  return -1;
}
// 473E97: variable 'v13' is possibly undefined
// 4B7D38: using guessed type int dword_4B7D38[];
