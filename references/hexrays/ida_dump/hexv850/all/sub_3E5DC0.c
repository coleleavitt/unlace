__int64 __fastcall sub_3E5DC0(_QWORD *a1, __int64 a2, __int64 a3, int a4, char a5, double a6)
{
  unsigned int v6; // r15d
  __int64 v8; // r13
  __int64 v11; // r14
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rax
  _DWORD *v15; // rbp
  __int64 v16; // rdi
  __int64 v18; // [rsp+10h] [rbp-58h] BYREF
  __int64 v19; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v20[9]; // [rsp+20h] [rbp-48h] BYREF

  v20[1] = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 == 4 )
  {
    v8 = *(_QWORD *)(a2 + 8);
    if ( *(_BYTE *)(v8 + 32) == 1 && a4 == *(_DWORD *)(v8 + 40) && (unsigned int)(*(_DWORD *)v8 - 12) <= 1 )
    {
      v6 = sub_154850(v8 + 48, &v18, 0);
      if ( (_BYTE)v6 )
      {
        if ( !(_WORD)v18 )
        {
          v11 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 24LL);
          if ( *(_DWORD *)(get_ph(v8 + 48) + 4) != 55 )
          {
            if ( !under_debugger )
              sub_37CFE0(0x291Cu, (__int64)&v18, a6);
            BUG();
          }
          v20[0] = -1;
          sub_CB3B0(0xBB9u, v20, v11);
          if ( v20[0] != -1 )
          {
            v12 = v20[0] - v18;
            if ( *(_DWORD *)v8 == 12 )
              v12 = v20[0] + v18;
            if ( (unsigned __int8)sub_11B1C0((char *)a3, &v19, 0) )
            {
              if ( !a5 )
              {
                *a1 = v12 - v19;
                return v6;
              }
              goto LABEL_27;
            }
            if ( a5 )
            {
              if ( *(_BYTE *)a3 == 4 )
              {
                v13 = *(_QWORD *)(a3 + 8);
                if ( *(_DWORD *)v13 == 8 && *(_DWORD *)(v13 + 36) == 2 && *(_BYTE *)(v13 + 32) == 4 )
                {
                  v14 = *(_QWORD *)(v13 + 40);
                  if ( *(_DWORD *)v14 == 10 && *(_BYTE *)(v14 + 32) == 4 )
                  {
                    v15 = *(_DWORD **)(v14 + 40);
                    if ( (unsigned int)(*v15 - 12) <= 1
                      && (unsigned __int8)sub_154850((__int64)(v15 + 8), &v19, 0)
                      && (unsigned __int8)sub_154850((__int64)(v15 + 12), v20, 0) )
                    {
                      v16 = v19 - v20[0];
                      if ( *v15 == 12 )
                        v16 = v19 + v20[0];
                      v19 = v16;
                      v19 = sub_325150(v16, 2, 1);
LABEL_27:
                      *a1 = v19 + v12;
                      return v6;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
