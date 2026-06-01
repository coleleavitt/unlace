void __fastcall std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_erase(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // r13
  _QWORD *v8; // r12
  _QWORD *v9; // r15
  _QWORD *v10; // r14
  _QWORD *v11; // rbx
  _QWORD *v12; // rbx
  _QWORD *v13; // rbx
  _QWORD *v14; // rbx
  _QWORD *v15; // rbx
  _QWORD *v16; // rbx
  _QWORD *v17; // rbx
  _QWORD *v18; // rbx
  _QWORD *v19; // rbx
  _QWORD *v20; // [rsp+8h] [rbp-60h]
  _QWORD *v21; // [rsp+10h] [rbp-58h]
  _QWORD *v22; // [rsp+18h] [rbp-50h]
  _QWORD *v23; // [rsp+20h] [rbp-48h]
  _QWORD *v24; // [rsp+28h] [rbp-40h]

  v24 = a2;
  if ( a2 )
  {
    v2 = a2;
    do
    {
      v3 = (_QWORD *)v2[3];
      v23 = v3;
      if ( v3 )
      {
        do
        {
          v4 = (_QWORD *)v3[3];
          v22 = v4;
          if ( v4 )
          {
            do
            {
              v5 = (_QWORD *)v4[3];
              v21 = v5;
              if ( v5 )
              {
                do
                {
                  v6 = (_QWORD *)v5[3];
                  v20 = v6;
                  if ( v6 )
                  {
                    do
                    {
                      v7 = (_QWORD *)v6[3];
                      if ( v7 )
                      {
                        do
                        {
                          v8 = (_QWORD *)v7[3];
                          if ( v8 )
                          {
                            do
                            {
                              v9 = (_QWORD *)v8[3];
                              if ( v9 )
                              {
                                do
                                {
                                  v10 = (_QWORD *)v9[3];
                                  if ( v10 )
                                  {
                                    do
                                    {
                                      std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_erase(
                                        a1,
                                        v10[3]);
                                      v11 = (_QWORD *)v10[2];
                                      operator delete(v10);
                                      v10 = v11;
                                    }
                                    while ( v11 );
                                  }
                                  v12 = (_QWORD *)v9[2];
                                  operator delete(v9);
                                  v9 = v12;
                                }
                                while ( v12 );
                              }
                              v13 = (_QWORD *)v8[2];
                              operator delete(v8);
                              v8 = v13;
                            }
                            while ( v13 );
                          }
                          v14 = (_QWORD *)v7[2];
                          operator delete(v7);
                          v7 = v14;
                        }
                        while ( v14 );
                      }
                      v15 = (_QWORD *)v20[2];
                      operator delete(v20);
                      v6 = v15;
                      v20 = v15;
                    }
                    while ( v15 );
                  }
                  v16 = (_QWORD *)v21[2];
                  operator delete(v21);
                  v5 = v16;
                  v21 = v16;
                }
                while ( v16 );
              }
              v17 = (_QWORD *)v22[2];
              operator delete(v22);
              v4 = v17;
              v22 = v17;
            }
            while ( v17 );
          }
          v18 = (_QWORD *)v23[2];
          operator delete(v23);
          v3 = v18;
          v23 = v18;
        }
        while ( v18 );
      }
      v19 = (_QWORD *)v24[2];
      operator delete(v24);
      v2 = v19;
      v24 = v19;
    }
    while ( v19 );
  }
}

