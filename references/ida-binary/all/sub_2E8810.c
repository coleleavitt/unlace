// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x2E8810
// Name:           sub_2E8810
// Function size:  1476 bytes (347 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x2E8810 push    r14; int
//   0x2E8812 push    r13; int
//   0x2E8814 push    r12; int
//   0x2E8816 push    rbp; int
//   0x2E8817 push    rbx; int
//   0x2E8818 sub     rsp, 40h
//   0x2E881C mov     rbx, fs:28h
//   0x2E8825 mov     qword ptr [rsp+68h+var_30], rbx; int
//   0x2E882A mov     rbx, rdi
//   0x2E882D mov     edi, 20h ; ' '; unsigned __int64
//   0x2E8832 call    __Znwm; operator new(ulong)
//   0x2E8837 mov     rdi, rax; this
//   0x2E883A mov     rbp, rax
//   0x2E883D mov     rsi, rbx; QT::QWidget *
//   0x2E8840 call    __ZN2QT11QVBoxLayoutC1EPNS_7QWidgetE; QT::QVBoxLayout::QVBoxLayout(QT::QWidget *)
//   0x2E8845 mov     [rbx+38h], rbp
//   0x2E8849 lea     rdi, [rbp+10h]
//   0x2E884D mov     esi, 20h ; ' '
//   0x2E8852 call    __ZN2QT11QLayoutItem12setAlignmentENS_6QFlagsINS_2Qt13AlignmentFlagEEE; QT::QLayoutItem::setAlignment(QT::QFlags<QT::Qt::AlignmentFlag>)
//   0x2E8857 mov     rsi, [rbx+38h]; QT::QLayout *
//   0x2E885B mov     rdi, rbx; this
//   0x2E885E call    __ZN2QT7QWidget9setLayoutEPNS_7QLayoutE; QT::QWidget::setLayout(QT::QLayout *)
//   0x2E8863 mov     edi, 28h ; '('; unsigned __int64
//   0x2E8868 call    __Znwm; operator new(ulong)
//   0x2E886D mov     rsi, rbx; QT::QWidget *
//   0x2E8870 mov     rdi, rax; this
//   0x2E8873 mov     rbp, rax
//   0x2E8876 call    __ZN2QT9QLineEditC1EPNS_7QWidgetE; QT::QLineEdit::QLineEdit(QT::QWidget *)
//   0x2E887B mov     [rbx+40h], rbp
//   0x2E887F mov     rdi, rbp; this
//   0x2E8882 mov     rsi, rbx; QT::QObject *
//   0x2E8885 call    __ZN2QT7QObject18installEventFilterEPS0_; QT::QObject::installEventFilter(QT::QObject*)
//   0x2E888A mov     rsi, [rbx+40h]
//   0x2E888E mov     rdi, [rbx+38h]
//   0x2E8892 xor     ecx, ecx
//   0x2E8894 xor     edx, edx
//   0x2E8896 call    __ZN2QT10QBoxLayout9addWidgetEPNS_7QWidgetEiNS_6QFlagsINS_2Qt13AlignmentFlagEEE; QT::QBoxLayout::addWidget(QT::QWidget *,int,QT::QFlags<QT::Qt::AlignmentFlag>)
//   0x2E889B mov     edi, 68h ; 'h'; unsigned __int64
//   0x2E88A0 call    __Znwm; operator new(ulong)
//   0x2E88A5 mov     rsi, rbx; QT::QWidget *
//   0x2E88A8 mov     rdi, rax; this
//   0x2E88AB mov     rbp, rax
//   0x2E88AE call    __ZN2QT9QListViewC2EPNS_7QWidgetE; QT::QListView::QListView(QT::QWidget *)
//   0x2E88B3 lea     rdi, off_8974E0; this
//   0x2E88BA lea     r12, [rbp+28h]
//   0x2E88BE call    __ZNK2QT11QMetaObject9classNameEv; QT::QMetaObject::className(void)
//   0x2E88C3 mov     rcx, rax
//   0x2E88C6 mov     edx, 2
//   0x2E88CB lea     rsi, off_862480; "highlight-bg-default"
//   0x2E88D2 mov     rdi, r12
//   0x2E88D5 call    sub_525E40
//   0x2E88DA lea     rax, _ZTV15StyledQListView; `vtable for'StyledQListView
//   0x2E88E1 mov     [rbx+48h], rbp
//   0x2E88E5 mov     rdi, rbp
//   0x2E88E8 mov     esi, 20h ; ' '
//   0x2E88ED lea     r12, [rsp+68h+ptr]
//   0x2E88F2 lea     rdx, [rax+10h]
//   0x2E88F6 mov     [rbp+0], rdx
//   0x2E88FA lea     rdx, [rax+328h]
//   0x2E8901 add     rax, 378h
//   0x2E8907 mov     [rbp+10h], rdx
//   0x2E890B mov     [rbp+28h], rax
//   0x2E890F call    __ZN2QT9QListView16setItemAlignmentENS_6QFlagsINS_2Qt13AlignmentFlagEEE; QT::QListView::setItemAlignment(QT::QFlags<QT::Qt::AlignmentFlag>)
//   0x2E8914 mov     rdi, [rbx+48h]; this
//   0x2E8918 mov     esi, 1; bool
//   0x2E891D call    __ZN2QT9QListView19setUniformItemSizesEb; QT::QListView::setUniformItemSizes(bool)
//   0x2E8922 mov     rax, cs:qword_5DC018
//   0x2E8929 mov     rdi, [rbx+48h]
//   0x2E892D mov     rsi, r12
//   0x2E8930 mov     [rsp+68h+ptr], rax; int
//   0x2E8935 call    __ZN2QT17QAbstractItemView11setIconSizeERKNS_5QSizeE; QT::QAbstractItemView::setIconSize(QT::QSize const&)
//   0x2E893A mov     rdi, [rbx+48h]; this
//   0x2E893E mov     esi, 2; int
//   0x2E8943 call    __ZN2QT9QListView10setSpacingEi; QT::QListView::setSpacing(int)
//   0x2E8948 mov     edi, 50h ; 'P'; unsigned __int64
//   0x2E894D call    __Znwm; operator new(ulong)
//   0x2E8952 mov     rsi, [rbx+48h]; QT::QObject *
//   0x2E8956 mov     rdi, rax; this
//   0x2E8959 mov     rbp, rax
//   0x2E895C call    __ZN2QT18QAbstractListModelC2EPNS_7QObjectE; QT::QAbstractListModel::QAbstractListModel(QT::QObject *)
//   0x2E8961 lea     rax, _ZTV17SearchResultModel; `vtable for'SearchResultModel
//   0x2E8968 mov     rdi, [rbx+48h]
//   0x2E896C pxor    xmm0, xmm0
//   0x2E8970 mov     qword ptr [rbp+10h], 0
//   0x2E8978 movups  xmmword ptr [rbp+18h], xmm0
//   0x2E897C mov     rsi, rbp
//   0x2E897F add     rax, 10h
//   0x2E8983 movups  xmmword ptr [rbp+30h], xmm0
//   0x2E8987 mov     [rbp+0], rax
//   0x2E898B mov     qword ptr [rbp+28h], 0
//   0x2E8993 mov     qword ptr [rbp+40h], 0
//   0x2E899B mov     dword ptr [rbp+48h], 0
//   0x2E89A2 mov     byte ptr [rbp+4Ch], 0
//   0x2E89A6 mov     [rbx+50h], rbp
//   0x2E89AA mov     rax, [rdi]
//   0x2E89AD call    qword ptr [rax+1C8h]
//   0x2E89B3 mov     edi, offset word_10; this
//   0x2E89B8 call    __Znwm; operator new(ulong)
//   0x2E89BD mov     rbp, rax
//   0x2E89C0 call    __ZN2QT12QApplication5styleEv; QT::QApplication::style(void)
//   0x2E89C5 mov     rsi, rax
//   0x2E89C8 mov     rdi, r12; this
//   0x2E89CB mov     r13, [rbx+48h]
//   0x2E89CF call    __ZNK2QT6QStyle4nameEv; QT::QStyle::name(void)
//   0x2E89D4 mov     rsi, r12; QT::QString *
//   0x2E89D7 mov     rdi, rbp; this
//   0x2E89DA call    __ZN2QT11QProxyStyleC2ERKNS_7QStringE; QT::QProxyStyle::QProxyStyle(QT::QString const&)
//   0x2E89DF mov     rax, [rsp+68h+ptr]
//   0x2E89E4 test    rax, rax
//   0x2E89E7 jz      short loc_2E89F3
//   0x2E89E9 lock sub dword ptr [rax], 1
//   0x2E89ED jz      loc_2E8D60
//   0x2E89F3 lea     rax, off_8726C8
//   0x2E89FA mov     rsi, r13; QT::QObject *
//   0x2E89FD mov     rdi, rbp; this
//   0x2E8A00 mov     [rbp+0], rax
//   0x2E8A04 call    __ZN2QT7QObject9setParentEPS0_; QT::QObject::setParent(QT::QObject*)
//   0x2E8A09 mov     [rbx+80h], rbp
//   0x2E8A10 mov     rdi, [rbx+48h]; this
//   0x2E8A14 mov     rsi, rbp; QT::QStyle *
//   0x2E8A17 call    __ZN2QT7QWidget8setStyleEPNS_6QStyleE; QT::QWidget::setStyle(QT::QStyle *)
//   0x2E8A1C mov     edi, 28h ; '('; unsigned __int64
//   0x2E8A21 call    __Znwm; operator new(ulong)
//   0x2E8A26 mov     rsi, rbx; QT::QWidget *
//   0x2E8A29 mov     rdi, rax; this
//   0x2E8A2C mov     rbp, rax
//   0x2E8A2F call    __ZN2QT14QStackedWidgetC1EPNS_7QWidgetE; QT::QStackedWidget::QStackedWidget(QT::QWidget *)
//   0x2E8A34 mov     [rbx+78h], rbp
//   0x2E8A38 mov     rdi, rbp; this
//   0x2E8A3B call    __ZN2QT7QWidget4hideEv; QT::QWidget::hide(void)
//   0x2E8A40 mov     edi, 28h ; '('; unsigned __int64
//   0x2E8A45 call    __Znwm; operator new(ulong)
//   0x2E8A4A mov     rsi, rbx; QT::QWidget *
//   0x2E8A4D mov     rdi, rax; this
//   0x2E8A50 mov     rbp, rax
//   0x2E8A53 call    __ZN2QT9QSplitterC1EPNS_7QWidgetE; QT::QSplitter::QSplitter(QT::QWidget *)
//   0x2E8A58 mov     [rbx+60h], rbp
//   0x2E8A5C mov     rdi, rbp
//   0x2E8A5F mov     esi, 1
//   0x2E8A64 call    __ZN2QT9QSplitter14setOrientationENS_2Qt11OrientationE; QT::QSplitter::setOrientation(QT::Qt::Orientation)
//   0x2E8A69 mov     rsi, [rbx+48h]; QT::QWidget *
//   0x2E8A6D mov     rdi, [rbx+60h]; this
//   0x2E8A71 call    __ZN2QT9QSplitter9addWidgetEPNS_7QWidgetE; QT::QSplitter::addWidget(QT::QWidget *)
//   0x2E8A76 mov     rsi, [rbx+78h]; QT::QWidget *
//   0x2E8A7A mov     rdi, [rbx+60h]; this
//   0x2E8A7E call    __ZN2QT9QSplitter9addWidgetEPNS_7QWidgetE; QT::QSplitter::addWidget(QT::QWidget *)
//   0x2E8A83 mov     rdi, [rbx+60h]
//   0x2E8A87 mov     esi, offset unk_770000
//   0x2E8A8C call    __ZN2QT7QWidget13setSizePolicyENS_11QSizePolicyE; QT::QWidget::setSizePolicy(QT::QSizePolicy)
//   0x2E8A91 mov     rdi, rbx; QT::QWidget *
//   0x2E8A94 call    sub_2E7F10
//   0x2E8A99 mov     rsi, [rbx+60h]
//   0x2E8A9D mov     rdi, [rbx+38h]
//   0x2E8AA1 xor     edx, edx
//   0x2E8AA3 xor     ecx, ecx
//   0x2E8AA5 call    __ZN2QT10QBoxLayout9addWidgetEPNS_7QWidgetEiNS_6QFlagsINS_2Qt13AlignmentFlagEEE; QT::QBoxLayout::addWidget(QT::QWidget *,int,QT::QFlags<QT::Qt::AlignmentFlag>)
//   0x2E8AAA mov     edi, 28h ; '('; unsigned __int64
//   0x2E8AAF call    __Znwm; operator new(ulong)
//   0x2E8AB4 xor     edx, edx
//   0x2E8AB6 mov     rsi, rbx
//   0x2E8AB9 mov     rdi, rax
//   0x2E8ABC mov     rbp, rax
//   0x2E8ABF call    __ZN2QT6QLabelC1EPNS_7QWidgetENS_6QFlagsINS_2Qt10WindowTypeEEE; QT::QLabel::QLabel(QT::QWidget *,QT::QFlags<QT::Qt::WindowType>)
//   0x2E8AC4 mov     [rbx+58h], rbp
//   0x2E8AC8 mov     rdi, [rbx+38h]
//   0x2E8ACC xor     ecx, ecx
//   0x2E8ACE xor     edx, edx
//   0x2E8AD0 mov     rsi, rbp
//   0x2E8AD3 lea     r13, [rsp+68h+var_58]
//   0x2E8AD8 lea     rbp, [rsp+68h+var_60]
//   0x2E8ADD call    __ZN2QT10QBoxLayout9addWidgetEPNS_7QWidgetEiNS_6QFlagsINS_2Qt13AlignmentFlagEEE; QT::QBoxLayout::addWidget(QT::QWidget *,int,QT::QFlags<QT::Qt::AlignmentFlag>)
//   0x2E8AE2 mov     rdi, [rbx+58h]; this
//   0x2E8AE6 call    __ZN2QT7QWidget4hideEv; QT::QWidget::hide(void)
//   0x2E8AEB lea     rax, sub_2EBA40
//   0x2E8AF2 mov     edi, 20h ; ' '; unsigned __int64
//   0x2E8AF7 mov     qword ptr [rsp+68h+var_58+8], 0
//   0x2E8B00 mov     qword ptr [rsp+68h+var_58], rax
//   0x2E8B05 mov     rax, cs:_ZN2QT9QLineEdit11textChangedERKNS_7QStringE_ptr
//   0x2E8B0C mov     [rsp+68h+ptr+8], 0
//   0x2E8B15 mov     r14, [rbx+40h]
//   0x2E8B19 mov     [rsp+68h+ptr], rax
//   0x2E8B1E call    __Znwm; operator new(ulong)
//   0x2E8B23 sub     rsp, 8
//   0x2E8B27 mov     r8, r13
//   0x2E8B2A mov     rcx, rbx
//   0x2E8B2D movdqa  xmm0, [rsp+70h+var_58]
//   0x2E8B33 mov     r9, rax
//   0x2E8B36 mov     rsi, r14
//   0x2E8B39 mov     rdx, r12
//   0x2E8B3C mov     dword ptr [rax], 1
//   0x2E8B42 lea     rax, sub_2E6630
//   0x2E8B49 mov     rdi, rbp
//   0x2E8B4C mov     [r9+8], rax
//   0x2E8B50 movups  xmmword ptr [r9+10h], xmm0
//   0x2E8B55 push    cs:_ZN2QT9QLineEdit16staticMetaObjectE_ptr
//   0x2E8B5B push    0
//   0x2E8B5D push    0
//   0x2E8B5F call    __ZN2QT7QObject11connectImplEPKS0_PPvS2_S4_PNS_9QtPrivate15QSlotObjectBaseENS_2Qt14ConnectionTypeEPKiPKNS_11QMetaObjectE; QT::QObject::connectImpl(QT::QObject const*,void **,QT::QObject const*,void **,QT::QtPrivate::QSlotObjectBase *,QT::Qt::ConnectionType,int const*,QT::QMetaObject const*)
//   0x2E8B64 add     rsp, 20h
//   0x2E8B68 mov     rdi, rbp; this
//   0x2E8B6B call    __ZN2QT11QMetaObject10ConnectionD1Ev; QT::QMetaObject::Connection::~Connection()
//   0x2E8B70 lea     rax, sub_2E9EF0
//   0x2E8B77 mov     edi, 20h ; ' '; unsigned __int64
//   0x2E8B7C mov     r14, [rbx+48h]
//   0x2E8B80 mov     qword ptr [rsp+68h+var_58], rax
//   0x2E8B85 mov     rax, cs:_ZN2QT17QAbstractItemView13doubleClickedERKNS_11QModelIndexE_ptr
//   0x2E8B8C mov     qword ptr [rsp+68h+var_58+8], 0
//   0x2E8B95 mov     [rsp+68h+ptr], rax
//   0x2E8B9A mov     [rsp+68h+ptr+8], 0
//   0x2E8BA3 call    __Znwm; operator new(ulong)
//   0x2E8BA8 mov     r8, r13
//   0x2E8BAB mov     rcx, rbx
//   0x2E8BAE mov     rsi, r14
//   0x2E8BB1 movdqa  xmm0, [rsp+68h+var_58]
//   0x2E8BB7 mov     r9, rax
//   0x2E8BBA sub     rsp, 8
//   0x2E8BBE mov     rdx, r12
//   0x2E8BC1 mov     dword ptr [rax], 1
//   0x2E8BC7 lea     rax, sub_2E66B0
//   0x2E8BCE mov     rdi, rbp
//   0x2E8BD1 mov     [r9+8], rax
//   0x2E8BD5 movups  xmmword ptr [r9+10h], xmm0
//   0x2E8BDA push    cs:_ZN2QT17QAbstractItemView16staticMetaObjectE_ptr
//   0x2E8BE0 push    0
//   0x2E8BE2 push    0
//   0x2E8BE4 call    __ZN2QT7QObject11connectImplEPKS0_PPvS2_S4_PNS_9QtPrivate15QSlotObjectBaseENS_2Qt14ConnectionTypeEPKiPKNS_11QMetaObjectE; QT::QObject::connectImpl(QT::QObject const*,void **,QT::QObject const*,void **,QT::QtPrivate::QSlotObjectBase *,QT::Qt::ConnectionType,int const*,QT::QMetaObject const*)
//   0x2E8BE9 add     rsp, 20h
//   0x2E8BED mov     rdi, rbp; this
//   0x2E8BF0 call    __ZN2QT11QMetaObject10ConnectionD1Ev; QT::QMetaObject::Connection::~Connection()
//   0x2E8BF5 mov     rdi, [rbx+48h]; this
//   0x2E8BF9 lea     rax, sub_2E6EC0
//   0x2E8C00 mov     qword ptr [rsp+68h+var_58+8], 0
//   0x2E8C09 mov     qword ptr [rsp+68h+var_58], rax
//   0x2E8C0E call    __ZNK2QT17QAbstractItemView14selectionModelEv; QT::QAbstractItemView::selectionModel(void)
//   0x2E8C13 mov     edi, 20h ; ' '; unsigned __int64
//   0x2E8C18 mov     [rsp+68h+ptr+8], 0
//   0x2E8C21 mov     r14, rax
//   0x2E8C24 mov     rax, cs:_ZN2QT19QItemSelectionModel17currentRowChangedERKNS_11QModelIndexES3__ptr
//   0x2E8C2B mov     [rsp+68h+ptr], rax
//   0x2E8C30 call    __Znwm; operator new(ulong)
//   0x2E8C35 mov     r8, r13
//   0x2E8C38 mov     rcx, rbx
//   0x2E8C3B mov     rsi, r14
//   0x2E8C3E movdqa  xmm0, [rsp+68h+var_58]
//   0x2E8C44 mov     r9, rax
//   0x2E8C47 sub     rsp, 8
//   0x2E8C4B mov     rdx, r12
//   0x2E8C4E mov     dword ptr [rax], 1
//   0x2E8C54 lea     rax, sub_2E63F0
//   0x2E8C5B mov     rdi, rbp
//   0x2E8C5E movups  xmmword ptr [r9+10h], xmm0
//   0x2E8C63 mov     [r9+8], rax
//   0x2E8C67 push    cs:_ZN2QT19QItemSelectionModel16staticMetaObjectE_ptr
//   0x2E8C6D push    0
//   0x2E8C6F push    0
//   0x2E8C71 call    __ZN2QT7QObject11connectImplEPKS0_PPvS2_S4_PNS_9QtPrivate15QSlotObjectBaseENS_2Qt14ConnectionTypeEPKiPKNS_11QMetaObjectE; QT::QObject::connectImpl(QT::QObject const*,void **,QT::QObject const*,void **,QT::QtPrivate::QSlotObjectBase *,QT::Qt::ConnectionType,int const*,QT::QMetaObject const*)
//   0x2E8C76 add     rsp, 20h
//   0x2E8C7A mov     rdi, rbp; this
//   0x2E8C7D call    __ZN2QT11QMetaObject10ConnectionD1Ev; QT::QMetaObject::Connection::~Connection()
//   0x2E8C82 mov     rdi, rbx; this
//   0x2E8C85 call    __ZNK2QT7QWidget15contentsMarginsEv; QT::QWidget::contentsMargins(void)
//   0x2E8C8A mov     rdi, [rbx+38h]; this
//   0x2E8C8E mov     rbp, rax
//   0x2E8C91 mov     r13, rdx
//   0x2E8C94 call    __ZNK2QT7QLayout15contentsMarginsEv; QT::QLayout::contentsMargins(void)
//   0x2E8C99 add     ebp, r13d
//   0x2E8C9C mov     rdi, r12
//   0x2E8C9F mov     r8d, 1
//   0x2E8CA5 mov     rsi, rax
//   0x2E8CA8 mov     eax, 1
//   0x2E8CAD mov     rcx, rdx
//   0x2E8CB0 mov     rdx, [rbx+20h]
//   0x2E8CB4 sub     eax, ebp
//   0x2E8CB6 mov     rbp, [rbx+60h]
//   0x2E8CBA sub     eax, esi
//   0x2E8CBC mov     esi, 4
//   0x2E8CC1 sub     eax, ecx
//   0x2E8CC3 add     eax, [rdx+1Ch]
//   0x2E8CC6 sub     eax, [rdx+14h]
//   0x2E8CC9 mov     ecx, 2
//   0x2E8CCE mov     edx, eax
//   0x2E8CD0 shr     edx, 1Fh
//   0x2E8CD3 add     eax, edx
//   0x2E8CD5 sar     eax, 1
//   0x2E8CD7 mov     rdx, rax
//   0x2E8CDA shl     rdx, 20h
//   0x2E8CDE or      rax, rdx
//   0x2E8CE1 mov     edx, 10h
//   0x2E8CE6 mov     rbx, rax
//   0x2E8CE9 call    __ZN2QT10QArrayData8allocateEPPS0_xxxNS0_16AllocationOptionE; QT::QArrayData::allocate(QT::QArrayData**,long long,long long,long long,QT::QArrayData::AllocationOption)
//   0x2E8CEE movq    xmm0, [rsp+68h+ptr]
//   0x2E8CF4 mov     rsi, r12
//   0x2E8CF7 mov     rdi, rbp
//   0x2E8CFA mov     [rax], rbx
//   0x2E8CFD movq    xmm1, rax
//   0x2E8D02 mov     [rsp+68h+var_38], 2
//   0x2E8D0B punpcklqdq xmm0, xmm1
//   0x2E8D0F movaps  xmmword ptr [rsp+68h+ptr], xmm0
//   0x2E8D14 call    __ZN2QT9QSplitter8setSizesERKNS_5QListIiEE; QT::QSplitter::setSizes(QT::QList<int> const&)
//   0x2E8D19 mov     rax, [rsp+68h+ptr]
//   0x2E8D1E test    rax, rax
//   0x2E8D21 jz      short loc_2E8D29
//   0x2E8D23 lock sub dword ptr [rax], 1
//   0x2E8D27 jz      short loc_2E8D50
//   0x2E8D29 mov     rax, qword ptr [rsp+68h+var_30]
//   0x2E8D2E sub     rax, fs:28h
//   0x2E8D37 jnz     short loc_2E8D6F
//   0x2E8D39 add     rsp, 40h
//   0x2E8D3D pop     rbx
//   0x2E8D3E pop     rbp
//   0x2E8D3F pop     r12
//   0x2E8D41 pop     r13
//   0x2E8D43 pop     r14
//   0x2E8D45 retn
//   0x2E8D46 align 10h
//   0x2E8D50 mov     rdi, [rsp+68h+ptr]; ptr
//   0x2E8D55 call    _free
//   0x2E8D5A jmp     short loc_2E8D29
//   0x2E8D5C align 20h
//   0x2E8D60 mov     rdi, [rsp+68h+ptr]; ptr
//   0x2E8D65 call    _free
//   0x2E8D6A jmp     loc_2E89F3
//   0x2E8D6F call    ___stack_chk_fail
//   0x2E8D74 mov     rbx, rax
//   0x2E8D77 jmp     loc_1341CA
//   0x2E8D7C mov     rbx, rax
//   0x2E8D7F jmp     loc_1341F2
//   0x2E8D84 mov     rbx, rax
//   0x2E8D87 jmp     loc_134228
//   0x2E8D8C mov     rbx, rax
//   0x2E8D8F jmp     loc_13424D
//   0x2E8D94 mov     rbx, rax
//   0x2E8D97 jmp     loc_134281
//   0x2E8D9C mov     rbx, rax
//   0x2E8D9F jmp     loc_1342AE
//   0x2E8DA4 mov     rbx, rax
//   0x2E8DA7 jmp     loc_1342D8
//   0x2E8DAC mov     rbx, rax
//   0x2E8DAF jmp     loc_134289
//   0x2E8DB4 mov     rbx, rax
//   0x2E8DB7 jmp     loc_1342E2
//   0x2E8DBC mov     rbx, rax
//   0x2E8DBF jmp     loc_134307
//   0x2E8DC4 mov     rbx, rax
//   0x2E8DC7 jmp     loc_13430F
//   0x2E8DCC mov     rbx, rax
//   0x2E8DCF jmp     loc_134343
// ============================================================

void sub_2E8810(/* signature unknown */)
{
    // see disassembly above
}

